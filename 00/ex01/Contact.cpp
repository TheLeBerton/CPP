#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	// std::cout << YELLOW << "Contact : in constructor" << RESET << std::endl;
}

Contact::~Contact(void)
{
	// std::cout << YELLOW << "Contact : in destructor" << RESET << std::endl;
}

void	Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
	_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void) const { return _firstName; }
std::string	Contact::getLastName(void) const { return _lastName; }
std::string	Contact::getNickname(void) const { return _nickname; }
std::string	Contact::getPhoneNumber(void) const { return _phoneNumber; }
std::string	Contact::getDarkestSecret(void) const { return _darkestSecret; }
