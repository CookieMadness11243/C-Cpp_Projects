#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "Source.h"

void clearTerminal(){system("cls");}
bool Login()
{
	clearTerminal();
	std::string Username, Password;
	std::cout << "Username: "; std::cin >> Username;
	std::cout << "Password: "; std::cin >> Password;
	std::string Input = Username + ": " + Password;
	std::ifstream File("Accounts.txt");
		std::string Line;
		while(std::getline(File, Line))
		{if(Input == Line) return true;}
	File.close();
	return false;
}
void Signup()
{
	clearTerminal();
	std::string Username, Password;
	std::cout << "New Username: "; std::cin >> Username;
    std::cout << "New Password: "; std::cin >> Password;
    std::string Input = Username + ": " + Password;   	
    std::fstream File("Accounts.txt", std::ios::app);
		File << Input << std::endl;
	File.close();
}

void Withdraw()
{

}

void Deposit()
{

}

int CheckBalance()
{
	return 0;
}
