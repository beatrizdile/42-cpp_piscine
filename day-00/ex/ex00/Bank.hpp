#ifndef BANK_HPP
#define BANK_HPP

#include "Account.hpp"
#include <vector>

class Bank
{
	private:
		int id;
		float liquidity;
		std::vector<Account *> clientsAccounts;
	public:
		Bank();
		~Bank();
		void createClient();
		void deleteClient(int id);
		void depositClient(int id, int amount);
		void giveLoan(int id, int amount);
	
		void printClients();
};

#endif