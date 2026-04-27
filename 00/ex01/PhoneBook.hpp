#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook {
	private:
		Contact	_contacts[ MAX_CONTACTS ];
		int		_count;

	public:
		PhoneBook() ;
		const Contact*	contact( int idx ) const ;
		int				addContact( Contact* newContact ) ;
		int				count() const ;
} ;

#endif
