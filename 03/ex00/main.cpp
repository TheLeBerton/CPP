#include "ClapTrap.hpp"

void	simpleTest()
{
	ClapTrap a("ClapTrapA");

	a.attack("ClapTrapB");
	a.takeDamage(5);
	a.beRepaired(3);
	a.attack("ClapTrapB");
	a.takeDamage(8);
	a.beRepaired(5);
	a.attack("ClapTrapB");
}

void	complexTest()
{
	ClapTrap a("ClapTrapA");
	ClapTrap b("ClapTrapB");
	a.attack("ClapTrapB");
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("ClapTrapA");
	a.takeDamage(8);
	a.beRepaired(5);
	a.attack("ClapTrapB");
}


int main(void)
{
	simpleTest();
	complexTest();
}
