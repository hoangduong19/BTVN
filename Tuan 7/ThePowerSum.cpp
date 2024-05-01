#include <iostream>
#include <cmath>
int powerSum(int x, int n, int num = 1)
{
	int power = pow(num, n);
	if (power > x) return 0;
	else if (power == x) return 1;
	else
	{
		return powerSum(x, n, num + 1) + powerSum(x - power, n, num + 1);//su dung tree va node de minh hoa
																		// 2 TH = 1 node co 2 con
																		//xai backtracking
	}
}
int main()
{
	int x, n;
	std::cin >> x >> n;
	std::cout << powerSum(x, n);
}