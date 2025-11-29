#include "team.hpp"
#include <string>
#include <iomanip>

Team::Team()
{
	_max_player_amount = 3;
	_player_amount = 0;
}

std::string	Team::_get_value(std::string value)
{
	std::string	val;

	while (val.empty())
	{
		std::cout << value + ": 		";
		std::getline(std::cin, val);
		if (val.empty())
			std::cout << "\e[0;31m" << "Value cannot be empty" << "\e[0m" << std::endl;
	}
	return (val);
}

bool		_check_index_validity(std::string index);

void	Team::draft_player()
{
	Mbappe	a;

	a.first_name = get_value("First Name");
	a.last_name = get_value("Last Name");
	a.nickname = get_value("Nickname");
	a.phone_number = get_value("Phone Nbr.");
	a.darkest_secret = get_value("Darkest Scrt.");
	if (_player_amount < _max_player_amount)
	{
		_players[_player_amount] = a;
		_player_amount++;
	}
	else
	{
		for (int i = 1; i < _max_player_amount; i++)
			_players[i - 1] = _players[i];
		_players[_max_player_amount - 1] = a;
	}
}

void	Team::scout_player()
{
	for (int i = 0; i < _player_amount; i++)
		_players[i].announce_goal(i);
	std::cout << "Please enter a valid index: ";

}

void	Team::retire_from_game()
{

}
