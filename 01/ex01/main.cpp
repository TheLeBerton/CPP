#include "Zombie.hpp"
#include <iostream>

int	main( void )
{
	std::cout << "Testing with 5 zombies:" << std::endl;
	Zombie* horde = zombieHorde(5, "Horde");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << "\nTesting with 0 zombies:" << std::endl;
	Zombie* emptyHorde = zombieHorde(0, "Empty");
	for (int i = 0; i < 0; i++)
		emptyHorde[i].announce();
	delete[] emptyHorde;

	std::cout << "\nTesting with -3 zombies:" << std::endl;
	Zombie* negativeHorde = zombieHorde(-3, "Negative");
	for (int i = 0; i < -3; i++)
		negativeHorde[i].announce();
	delete[] negativeHorde;

	return (0);
}
