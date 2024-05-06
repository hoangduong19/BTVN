#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int queue;
    std::cin >> queue;
    cin.ignore();
    std::string str;
    for (int i = 0; i < queue; i++)
    {
        getline(cin, str);
        for (int i = 0; i < str.length(); i++)
        {
            if (i % 2 == 0) std::cout << str[i];
        }
        std::cout << " ";
        for (int i = 0; i < str.length(); i++)
        {

            if (i % 2 != 0) std::cout << str[i];
        }
        std::cout << "\n";
    }
    return 0;
}
