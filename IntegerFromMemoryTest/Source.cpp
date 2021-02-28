#include <iostream>

int main()
{
	int x{ 0 };
	int y{ 0 };

	std::cout << "Insert first number: ";
	std::cin >> x;
	
	std::cout << "Insert second number: ";
	std::cin >> y;

	std::cout << x << " + " << y << " = " << x + y << '\n';

	return 0;
}