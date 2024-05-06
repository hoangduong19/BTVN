#include <iostream>
#include <vector>
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int numbersOfSwaps = 0;
    int numbersOfNums; std::cin >> numbersOfNums;
    std::vector<int> vector(numbersOfNums);
    for (int i = 0; i < numbersOfNums; i++)
    {
        std::cin >> vector[i];
    }
    bool swapped;
    for (int i = 0; i < numbersOfNums; i++)//so lan chay vong lap vs num
    {
        swapped = false;
        for (int j = 0; j < numbersOfNums - i - 1; j++)//ham bubble sort
        {
            if (vector[j] > vector[j + 1])
            {
                swap(vector[j], vector[j + 1]);
                numbersOfSwaps++;
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
    std::cout << "Array is sorted in " << numbersOfSwaps << " swaps.\n";
    std::cout << "First Element: " << vector[0] << "\n";
    std::cout << "Last Element: " << vector[numbersOfNums - 1];
}