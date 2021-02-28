#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{ 0 };
	std::cin >> input;

	return input;
}

int main()
{
	int num{ getValueFromUser() };
	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}