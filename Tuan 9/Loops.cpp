#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 1; i <= 10; i++) {
        int result = n * i;
        std::cout << n << " x " << i << " = " << result << std::endl;
    }

    return 0;
}
