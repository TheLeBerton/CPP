#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0)
{
}

Fixed::Fixed( const Fixed &src )
{
    *this = src;
}

Fixed::~Fixed( void )
{
}

Fixed &Fixed::operator=( const Fixed &rhs )
{
    if (this != &rhs)
        this->_value = rhs._value;
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return this->_value;
}

void Fixed::setRawBits( int const raw )
{
    this->_value = raw;
}