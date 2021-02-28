#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int equate(double xp)
{
	return (int)floor
	(xp + 300 * pow(2, xp / 7));
}

int levelToXP(int level)
{
	double xp = 0;

	for (int i = 1; i < level; i++)
		xp += equate(i);

	return (int)floor(xp / 4);
}

int xPToLevel(int xp)
{
	int level = 0;

	while (levelToXP(level) < xp)
		level++;

	return level;
}


int main()
{
	int sxp{ 0 }; //starting experience
	std::cout << "Insert starting experience: ";
	std::cin >> sxp;

	int level{ 0 }; //target level
	std::cout << "Insert target level: ";
	std::cin >> level;

	float neededXp = levelToXP(level) - sxp;

	std::cout << "Experience required: " << std::setprecision(9) << neededXp << '\n';

	std::cout  << "Casts required: " << std::setprecision(9) << neededXp / 11.5 << '\n';

	std::cout << "Gold required: " << std::setprecision(9) << neededXp / 2 << '\n';

	std::cout << "Time required in hours: " << std::setprecision(6) << neededXp / 13800 << '\n';

	return 0;

}
