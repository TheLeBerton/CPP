#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main(void)
{
	Zombie	z = Zombie( "Stack" );
	Zombie*	z2 = newZombie( "Heap" );
	z2->announce();
	randomChump( "Random" );
	delete z2;
	return (0);
}
