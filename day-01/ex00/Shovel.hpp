#ifndef Shovel_HPP
#define Shovel_HPP

#include "Worker.hpp"

class Worker;

class Shovel
{
private:
	
public:
	Shovel();
	~Shovel();
	void use();
	Worker *workerUsing;
	int numberOfUses;
};

Shovel::Shovel()
{
	this->numberOfUses = 0;
	this->workerUsing = NULL;
}

Shovel::~Shovel()
{
}

void Shovel::use()
{
	this->numberOfUses++;
}

#endif