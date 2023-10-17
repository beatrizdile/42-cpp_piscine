#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <iostream>


class Account
{
	private:
		int id;
		float value;
		Account(int id);
	public:
		~Account();
		int getId()const;
		int getValue()const;

	friend class Bank;
};

std::ostream & operator << (std::ostream &lhs, Account &rhs);

#endif