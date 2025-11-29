#ifndef MBAPPE_HPP
# define MBAPPE_HPP

#include <iostream>

class Mbappe
{
	public:
		Mbappe();
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		void	trash_talk();
		void	announce_goal(int index);

	private:
		void	announce_goal_banner();
};

#endif
