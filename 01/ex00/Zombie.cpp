#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name )
{
	std::cout << "Constructor called for " << name << std::endl;
	_name = name;
}

Zombie::~Zombie( )
{
	std::cout << "Destructor called for " << _name << std::endl;
}

void	Zombie::announce( )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
