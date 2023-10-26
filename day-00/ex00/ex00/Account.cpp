#include "Account.hpp"
#include <iostream>

Account::Account(int id)
{
	this->id = id;
	this->value = 0;
}

Account::~Account()
{
	
}

int Account::getId()const
{
	return this->id;
}

int Account::getValue()const
{
	return this->value;
}

std::ostream& operator <<(std::ostream &lhs, Account &rhs) {
	lhs << "value: " << rhs.getValue() << " id: " << rhs.getId();
	return lhs;
}
