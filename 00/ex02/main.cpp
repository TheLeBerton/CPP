#include "Account.hpp"
#include <iostream>

int main(void)
{
	Account accounts[8] = {
		Account( 42 ),
		Account( 54 ),
		Account( 957 ),
		Account( 432 ),
		Account( 1234 ),
		Account( 0 ),
		Account( 754 ),
		Account( 16576 )
	};

	std::cout << std::endl;

	Account::displayAccountsInfos();

	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		accounts[i].displayStatus();

	std::cout << std::endl;

	accounts[0].makeDeposit( 5 );
	accounts[1].makeDeposit( 765 );
	accounts[2].makeDeposit( 564 );
	accounts[3].makeDeposit( 2 );
	accounts[4].makeDeposit( 87 );
	accounts[5].makeDeposit( 23 );
	accounts[6].makeDeposit( 9 );
	accounts[7].makeDeposit( 20 );

	std::cout << std::endl;

	Account::displayAccountsInfos();

	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		accounts[i].displayStatus();

	std::cout << std::endl;

	accounts[0].makeWithdrawal( 34 );
	accounts[1].makeWithdrawal( 657 );
	accounts[2].makeWithdrawal( 4 );
	accounts[3].makeWithdrawal( 76 );
	accounts[4].makeWithdrawal( 657 );
	accounts[5].makeWithdrawal( 4 );
	accounts[6].makeWithdrawal( 76 );
	accounts[7].makeWithdrawal( 7654 );

	std::cout << std::endl;

	Account::displayAccountsInfos();

	std::cout << std::endl;

	for (int i = 0; i < 8; i++)
		accounts[i].displayStatus();

	std::cout << std::endl;
}
