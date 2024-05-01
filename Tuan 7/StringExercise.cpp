#include <iostream>
int main()
{
	char letters[4] = { 'a', 'b', 'c', 'd' };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				std::cout << letters[i] << letters[j] << letters[k] << std::endl;
			}
		}
	}
}