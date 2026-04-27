#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count( 0 ) {}

const Contact*	PhoneBook::contact( int idx ) const {
	if ( idx < 0 || idx >= _count )
		return ( NULL );
	return ( &_contacts[ idx ] );
}

int	PhoneBook::addContact( Contact* newContact ) {
	if ( newContact == NULL )
		return ( -1 );
	if ( _count == MAX_CONTACTS ) {
		for ( int i = 0; i < MAX_CONTACTS - 1; i++ )
			_contacts[ i ] = _contacts[ i + 1 ];
		_contacts[ MAX_CONTACTS - 1 ] = *newContact;
	} else {
		_contacts[ _count ] = *newContact;
		_count++;
	}
	return ( 0 );
}

int	PhoneBook::count() const {
	return ( _count );
}
