#include <iostream>

int main()
{
	std::cout << "Enter an interger: ";
	
	int num{ 0 };
	std::cin >> num;
	
	std::cout << "Double that number is: " << num * 2 << '\n';
	std::cout << "Triple that number is: " << num * 3 << '\n';
	std::cout << "Plus one of that number is: " << num + 1 << '\n';
	std::cout << "Minus one of that number is: " << num - 1 << '\n';

	return 0;

}