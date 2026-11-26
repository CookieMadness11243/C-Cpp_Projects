// Build a banking system that you can: Login, Withdraw, Deposit, 
// CheckBalance
//
#include <iostream>
#include "Source.h"
#include <iomanip>
int main()
{
	int choice;
	bool Access = false;
	clearTerminal();
	std::cout << std::setw(10) << "Bank\n"
		<< std::setw(15) << "1. Login\n"
		<< std::setw(16) << "2. Signup\n";
	
	std::cout << "\n\n\n\n\nInput: ";
	std::cin >> choice;
	if(choice == 1)
	{ 
		Access = Login(); 
		if(!Access) std::cout << "Username/Password Incorrect";
	}
	else if(choice == 2) Signup();
	// ------------------------------------------------// Withdraw, Deposit, CheckBalance, Logout
	while(Access)
	{
		clearTerminal();
			std::cout << std::setw(10) << "Bank\n"
			//						"1. Login\n"
				<< std::setw(22) << "1. CheckBalance\n"
				<< std::setw(17) << "2. Deposit\n"
				<< std::setw(18) << "3. Withdraw\n"
				<< std::setw(16) << "4. Logout\n"
				<< "\n\n\nInput: "; 
			std::cin >> choice;
			if     (choice == 1) CheckBalance();
			else if(choice == 2)      Deposit();
			else if(choice == 3)     Withdraw();
			else break;
	}
	clearTerminal();
	return 0;
}
