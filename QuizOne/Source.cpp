#include <iostream>

int main()
{
	int x{ 0 };
	int y{ 0 };
	int z{ 0 };
	
	std::cout << "Enter an integer: ";
	std::cin >> x;

	std::cout << "Enter a second integer: ";
	std::cin >> y;

	std::cout << "Enter a third integer: ";
	std::cin >> z;

	std::cout << x << " + " << y << " - " << z << " is " << x + y - z<< '\n';
	std::cout << x << " - " << y << " + " << z << " is " << x - y + z<< '\n';



}