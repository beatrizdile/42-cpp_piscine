#ifndef WORKER_HPP
#define WORKER_HPP

#include "Shovel.hpp"
class Shovel;


struct Position
{
	int x;
	int y;
	int z;
};

struct Statistic
{
	int level;
	int exp;
};


class Worker
{
	private:
		// Position coordonnee;
		// Statistic stat;
	public:
		Worker();
		~Worker();
		void getTool(Shovel *newShovel);
		Shovel *shovelInUse;
};

Worker::Worker()
{
	this->shovelInUse = NULL;
}

Worker::~Worker()
{
	if(shovelInUse != NULL)
		shovelInUse->workerUsing = NULL;
}

void Worker::getTool(Shovel *newShovel)
{
	if(this->shovelInUse != NULL)
		(*this->shovelInUse).workerUsing = NULL;
	if(newShovel->workerUsing != NULL)
		newShovel->workerUsing->shovelInUse = NULL;
	this->shovelInUse = newShovel;
	(*newShovel).workerUsing = this;
}

#endif
