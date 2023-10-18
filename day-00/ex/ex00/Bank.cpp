#include <iostream>
#include "Bank.hpp"
#include "Account.hpp"
#include <iterator>

Bank::Bank()
{
	this->id = -1;
	this->liquidity = 0;
}

Bank::~Bank()
{	
	for (Account * ptr : clientsAccounts) {
        delete ptr;
    }
}

void Bank::createClient()
{
	this->id++;
	Account *account = new Account(this->id);
	this->clientsAccounts.push_back(account);
}

void Bank::deleteClient(int id)
{
	for(std::vector<Account *>::iterator it = this->clientsAccounts.begin(); it != this->clientsAccounts.end(); it++)
	{
		if ((*it)->getId() == id)
		{
			delete *it;
			this->clientsAccounts.erase(it);
			break;
		}
	}
}

void Bank::depositClient(int id, int amount)
{
	if (amount > 0)
	{
		for(std::vector<Account *>::iterator it = this->clientsAccounts.begin(); it != this->clientsAccounts.end(); it++)
		{
			if ((*it)->getId() == id)
			{
				this->liquidity += ((float)amount * 0.05);
				(*it)->value += (float)(amount - ((float)(amount * 0.05)));
				break;
			}
		}
	}
}

void Bank::printClients()
{
	for(std::vector<Account *>::iterator it = this->clientsAccounts.begin(); it != this->clientsAccounts.end(); it++)
	{
		std::cout << *(*it) << std::endl;
	}
	std::cout << "liquidity: " << this->liquidity << std::endl;
}

void Bank::giveLoan(int id, int amount)
{
	if (amount > 0)
	{
		if (amount > this->liquidity)
			std::cout << "Can not loan this amount of money\n";
		else
		{
			for(std::vector<Account *>::iterator it = this->clientsAccounts.begin(); it != this->clientsAccounts.end(); it++)
			{
				if ((*it)->getId() == id)
				{
					(*it)->value += amount;
					this->liquidity -= amount;
					break;
				}
			}
		}
	}
}

void Bank::withdrawMoney(int id, int amount)
{
	for(std::vector<Account *>::iterator it = this->clientsAccounts.begin(); it != this->clientsAccounts.end(); it++)
	{
		if ((*it)->getId() == id && amount > 0 && amount < (*it)->value)
		{
			(*it)->value -= (float)amount;
			break;
		}
	}
}
