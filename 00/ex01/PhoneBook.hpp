#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <string>

# include "Contact.hpp"
# include "Colors.h"


class	PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add(Contact &newContact);
		Contact	&getContact(int index);
		void	displayContactsAsList( void );
		int		getContactsSizeCurrent( void );
		void	displaySingleContact( Contact &contact );

	private:
		Contact		_contacts[8];
		int			_contactsSizeMax;
		int			_contactsSizeCurrent;
		void		_displayLine( std::string first, std::string second );
		std::string _getPerfectSizedStr( std::string str );

} ;

#endif
