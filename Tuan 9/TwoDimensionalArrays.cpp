#include <iostream>
#include <vector>
int main()
{
    std::vector <std::vector <int>> vector(6, std::vector<int>(6));
    std::vector <int> sum(6);
    int max_sum = -64;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cin >> vector[i][j];
        }
    }
    for (int i = 0; i < 6 - 2; i++)
    {   //i la cot, j la hang
        for (int j = 0; j < 6 - 2; j++)
        {
            int sum_hour_glass = vector[i][j] + vector[i][j + 1] + vector[i][j + 2] +
                vector[i + 1][j + 1] + vector[i + 2][j] + vector[i + 2][j + 1]
                + vector[i + 2][j + 2];
            if (max_sum < sum_hour_glass)
            {
                max_sum = sum_hour_glass;
            }
        }
    }
    std::cout << max_sum;
}