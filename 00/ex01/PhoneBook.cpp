
#include "PhoneBook.hpp"


PhoneBook::PhoneBook( void )
{
	// std::cout << YELLOW << "PhoneBook : In constructor." << RESET << std::endl;
	_contactsSizeMax = 8;
	_contactsSizeCurrent = 0;
}

PhoneBook::~PhoneBook( void )
{
	// std::cout << YELLOW << "PhoneBook : In destructor." << RESET << std::endl;
}

void	PhoneBook::add( Contact &newContact )
{
	if ( _contactsSizeCurrent < _contactsSizeMax )
	{
		_contacts[_contactsSizeCurrent] = newContact;
		_contactsSizeCurrent++;
	}
	else
	{
		for ( int i = 0; i < _contactsSizeMax - 1; i++ )
		{
			_contacts[i] = _contacts[i + 1];
		}
		_contacts[_contactsSizeMax - 1] = newContact;
	}
	// std::cout << YELLOW << "PhoneBook : added successfully " << newContact.getFirstName() << RESET << std::endl;
}

Contact	&PhoneBook::getContact( int index )
{
	return ( _contacts[index] );
}

std::string PhoneBook::_getPerfectSizedStr( std::string str )
{
	if ( str.size() <= 10 )
		return ( str );
	return ( str.substr(0, 9) + '.' );
}

void	PhoneBook::displayContactsAsList( void )
{
	std::cout << GREEN;
	std::cout << " === CONTACTS === " << std::endl;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for ( int i = 0; i < _contactsSizeCurrent; i++ )
	{
		std::cout << std::right << std::setw(10) << i + 1 << "|";
		std::cout << std::right << std::setw(10) << \
			_getPerfectSizedStr( _contacts[i].getFirstName() ) << "|";
		std::cout << std::right << std::setw(10) << \
			_getPerfectSizedStr( _contacts[i].getLastName() ) << "|";
		std::cout << std::right << std::setw(10) << \
			_getPerfectSizedStr( _contacts[i].getNickname() ) << std::endl;
	}
	std::cout << RESET;
}

int	PhoneBook::getContactsSizeCurrent( void ) { return ( _contactsSizeCurrent ); }

void	PhoneBook::_displayLine( std::string first, std::string second )
{
	std::cout << std::left << std::setw(15) << first << " : " \
		<< std::right << std::setw(5) << " " << second << std::endl;
}

void	PhoneBook::displaySingleContact( Contact &contact )
{
	std::cout << GREEN;
	std::cout << " === SINGLE VIEW === " << std::endl;
	_displayLine( "First name", contact.getFirstName() );
	_displayLine( "Last name", contact.getLastName() );
	_displayLine( "Nickname", contact.getNickname() );
	_displayLine( "Phone number", contact.getPhoneNumber() );
	_displayLine( "Darkest secret", contact.getDarkestSecret() );
	std::cout << RESET;
}
