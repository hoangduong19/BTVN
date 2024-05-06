#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    int n, num;
    std::cin >> n;
    std::vector <int> vector(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        vector.push_back(num);
    }
    std::reverse(vector.begin(), vector.end());
    for (int i = 0; i < n; i++)
    {
        std::cout << vector[i] << " ";
    }
}