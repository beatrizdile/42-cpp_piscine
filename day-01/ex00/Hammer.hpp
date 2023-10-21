#ifndef HAMMER_HPP
#define HAMMER_HPP

#include "Tool.hpp"

class Hammer : public Tool
{
	private:
		void use();
	public:
		Hammer();
		~Hammer();
};

Hammer::Hammer() : Tool()
{
}

Hammer::~Hammer()
{
}

void Hammer::use()
{
	this->numberOfUses++;
}

#endif