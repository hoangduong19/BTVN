#include <iostream>
#include <string>
#include <cstdlib>
void getFeedback(int low, int high)
{
	int guess;
	do
	{
		int mid = (high + low) / 2;
		std::cout << "Is the number " << mid << " ?" << "(1: higher, 2: lower, 3: correct)" << "\n";
		while (!(std::cin >> guess)) {
			std::cin.clear(); //clear bad input flag
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
			std::cout << "Invalid input; please re-enter.\n";
		}
		if (guess == 1)
		{
			low = mid + 1;
		}
		else if (guess == 2)
		{
			high = mid - 1;
		}
		else if (guess != 3)
		{
			std::cout << "Invalid Input, please enter 1, 2, 3." << "\n";
		}
		else
		{
			std::cout << "I have guessed the number, hihi.";
			return;
		}
	} while (guess != 3);
}
int main()
{
	int high, low;
	//executes loop if the input fails (e.g., no characters were read)
	while (std::cout << "Enter number: " && !(std::cin >> low >> high)) {
		std::cin.clear(); //clear bad input flag
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
		std::cout << "Invalid input; please re-enter.\n";
	}
	std::cout << "Welcome to the guessing game! Guess a number between " << low << " and " << high << "\n";
	getFeedback(low, high);
}