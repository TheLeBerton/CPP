#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( )
{
	std::cout << "Default constructor called" << std::endl;
	_name = "default";
}

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

void	Zombie::setName( std::string name )
{
	if (name.empty())
		_name = "default";
	else
		_name = name;
}
