#include "Account.hpp"
#include "Bank.hpp"
#include <iostream>

int main()
{
	Bank bank;

	std::cout << "-----------" << std::endl;
	bank.createClient();
	bank.createClient();
	bank.createClient();
	bank.printClients();
	bank.deleteClient(0);
	std::cout << "-----------" << std::endl;
	bank.printClients();
	bank.depositClient(1, 5000);
	bank.depositClient(2, 5000);
	std::cout << "-----------" << std::endl;
	bank.printClients();
	bank.giveLoan(2, 50);
	bank.giveLoan(1, -50);
	std::cout << "-----------" << std::endl;
	bank.printClients();
	std::cout << "-----------" << std::endl;
	bank.withdrawMoney(2, 50);
	bank.printClients();
}