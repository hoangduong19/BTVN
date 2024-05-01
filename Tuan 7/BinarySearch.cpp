#include <iostream>
int binarySearch(int low, int high, int arr[], int x)
{
	if (low > high) return -1;
	int mid = (low + high) / 2;
	if (arr[mid] > x) return binarySearch(low, mid - 1, arr, x);
	else if (arr[mid] < x) return binarySearch(mid + 1, high, arr, x);
	else if (arr[mid] == x) return mid;
}
int main()
{
	int x;
	std::cin >> x;
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		std::cin >> a[i];
	}
	std::cout << binarySearch(0, 4, a, x);
}