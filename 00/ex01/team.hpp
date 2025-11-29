#ifndef TEAM_HPP
# define TEAM_HPP

# include "mbappe.hpp"

class Team
{
	private:
		Mbappe		_players[8];
		int			_max_player_amount;
		int			_player_amount;
		std::string	_get_value(std::string value);
		bool		_check_index_validity(std::string index);

	public:
		Team();
		void	draft_player();
		void	scout_player();
		void	retire_from_game();
};

#endif
