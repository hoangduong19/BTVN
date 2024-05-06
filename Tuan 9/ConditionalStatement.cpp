#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n % 2 != 0) {
        std::cout << "Weird";
    }
    else {
        if (n >= 2 && n <= 5) {
            std::cout << "Not Weird";
        }
        else if (n >= 6 && n <= 20) {
            std::cout << "Weird";
        }
        else {
            std::cout << "Not Weird";
        }
    }

    return 0;
}
