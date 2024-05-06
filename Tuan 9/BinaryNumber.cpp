#include <iostream>
#include <vector>
int main()
{
    int num;
    std::vector <int> binary;
    std::cin >> num;
    while (num > 0)
    {
        binary.push_back(num % 2);
        num = num / 2;
    }
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < binary.size(); i++)
    {
        if (binary[i] == 1)
        {
            count++;
            if (count > max_count) max_count = count;
        }
        else {
            count = 0;
        }
    }
    std::cout << max_count;
}