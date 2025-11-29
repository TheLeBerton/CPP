#include "mbappe.hpp"
#include <iomanip>

Mbappe::Mbappe()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

void	Mbappe::trash_talk()
{
	std::cout << "First Name:	" + first_name << std::endl;
	std::cout << "Last Name:	" + last_name << std::endl;
	std::cout << "Nickname:		" + nickname << std::endl;
	std::cout << "Phone Nr.:	" + phone_number << std::endl;
	std::cout << "Darkest S.:	" + darkest_secret << std::endl;
}

void	Mbappe::announce_goal_banner()
{
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << std::endl;
}

void	Mbappe::announce_goal(int index)
{
	announce_goal_banner();
	std::cout << std::setw(10);
	std::cout << index;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << first_name;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << last_name;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << nickname << std::endl;
}
