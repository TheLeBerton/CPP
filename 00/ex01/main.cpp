#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string	getUserAnswer(std::string question)
{
	std::string	answer;

	while ( answer.empty() )
	{
		std::cout << std::left << std::setw( 35 ) << question;
		if ( !std::getline( std::cin, answer ) )
			exit( 0 );
		if ( answer.empty() )
			std::cout << "Answer cannot be empty." << std::endl;
	}
	return ( answer );
}

int	getUserChoice( int maxChoices )
{
	std::string	line;
	int			answer;

	answer = 0;
	while (true)
	{
		std::cout << "Please enter a number between 1 and " << maxChoices << " : ";
		if ( !std::getline( std::cin, line ) )
			exit( 0 );
		if ( line.empty() )
		{
			std::cout << "Invalid input. Please enter a number." << std::endl;
			continue ;
		}
		std::stringstream ss( line );
		if ( !( ss >> answer ) || !(ss >> std::ws).eof())
		{
			std::cout << "Invalid input please enter a number." << std::endl;
			continue ;
		}
		if ( answer >= 1 && answer <= maxChoices)
			break ;
		std::cout << "Number must be between 1 and " << maxChoices << "." << std::endl;
	}
	return (answer);
}

void	addContact( PhoneBook &phoneBook )
{
	Contact	newContact;

	newContact.setFirstName(getUserAnswer("Please enter your first name : "));
	newContact.setLastName(getUserAnswer("Please enter your last name : "));
	newContact.setNickname(getUserAnswer("Please enter your nickname : "));
	newContact.setPhoneNumber(getUserAnswer("Please enter your phone number : "));
	newContact.setDarkestSecret(getUserAnswer("Please enter your darkest secret : "));
	phoneBook.add(newContact);
}

void	searchContact( PhoneBook &phoneBook )
{
	int	index;

	if ( phoneBook.getContactsSizeCurrent() == 0 )
		std::cout << "The phone book is empty, please add a contact first" << std::endl;
	phoneBook.displayContactsAsList();
	index = getUserChoice( phoneBook.getContactsSizeCurrent() ) - 1;
	phoneBook.displaySingleContact( phoneBook.getContact( index ) );
	std::cout << "Press enter to continue ...";
	std::cin.get();
}

void	exit(bool &isRunning)
{
	isRunning = false;
}

int main( void )
{
	PhoneBook	phoneBook;
	bool		isRunning;
	int			userChoice;

	isRunning = true;
	while ( isRunning )
	{
		userChoice = getUserChoice(3);
		std::cout << "You chose: " << userChoice << std::endl;
		std::cout.flush();
		if ( userChoice == 1 )
			addContact( phoneBook );
		else if ( userChoice == 2 )
			searchContact( phoneBook );
		else if ( userChoice == 3 )
			exit( isRunning );
	}
}
