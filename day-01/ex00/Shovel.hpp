#ifndef Shovel_HPP
#define Shovel_HPP

#include "Tool.hpp"

class Shovel : public Tool
{
	private:
		void use();
	public:
		Shovel();
		~Shovel();
};

Shovel::Shovel() : Tool()
{
}

Shovel::~Shovel()
{
}

void Shovel::use()
{
	this->numberOfUses++;
}

#endif