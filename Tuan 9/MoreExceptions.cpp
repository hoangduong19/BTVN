#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator
{
public:
    int power(int x, int y);
};
int Calculator::power(int x, int y)
{
    if (x < 0 || y < 0) throw runtime_error("n and p should be non-negative");
    return pow(x, y);
}

int main()
{
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while (T-- > 0) {
        if (scanf("%d %d", &n, &p) == 2) {
            try {
                int ans = myCalculator.power(n, p);
                cout << ans << endl;
            }
            catch (exception& e) {
                cout << e.what() << endl;
            }
        }
    }

}