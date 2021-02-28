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
	int x{ getValueFromUser() };
	int y{ getValueFromUser() };
	int z{ getValueFromUser() };
	
	std::cout << x << " + " << y << " + " << z << " = " << x + y + z << '\n';

	return 0;
}
