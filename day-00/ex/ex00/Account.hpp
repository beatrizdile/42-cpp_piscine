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
		int getValue()const;
		int getId()const;
		~Account();

	friend class Bank;
};

std::ostream & operator << (std::ostream &lhs, Account &rhs);

#endif