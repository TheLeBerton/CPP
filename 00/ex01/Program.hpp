#ifndef PROGRAM_HPP
# define PROGRAM_HPP

# include "PhoneBook.hpp"
#include <string>

class Program {
	private:
		PhoneBook	_phoneBook ;
		bool		_is_running;
		void		_add() ;
		void		_search() ;
		void		_exit() ;
		std::string	_getField( const std::string& prompt ) ;
		std::string _truncate( const std::string& field ) ;
		void		_displayContactShort( const Contact* contact, int idx ) ;
		void		_displayContactLong( const Contact* contact ) ;
		void		_displayHeaderShort() ;

	public:
		Program() ;
		void	run() ;
};

#endif
