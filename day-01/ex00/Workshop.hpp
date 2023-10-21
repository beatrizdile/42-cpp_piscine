#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <iterator>
#include <vector>
#include <iostream>
#include "Worker.hpp"

class Worker;

class Workshop
{
	private:
		std::vector<Worker *> listWorkers;
		bool findWorker(Worker *worker);
	public:
		Workshop();
		~Workshop();
		void registerWorker(Worker * newWorker);
		void releaseWorker(Worker * worker);
		void executeWorkDay();
};

Workshop::Workshop()
{
}

Workshop::~Workshop()
{
}

void Workshop::executeWorkDay()
{
	for(std::vector<Worker *>::iterator it = this->listWorkers.begin(); it != this->listWorkers.end(); it++)
	{
		(*it)->work();
	}
}

void Workshop::registerWorker(Worker * newWorker)
{
	if (!findWorker(newWorker))
	{
		this->listWorkers.push_back(newWorker);
		std::cout << "This " << newWorker << " worker was added at the workshop " << this << std::endl;
	}
	else
		std::cout << "This worker already is at this workshop" << std::endl;
}

void Workshop::releaseWorker(Worker * worker)
{
	for(std::vector<Worker *>::iterator it = this->listWorkers.begin(); it != this->listWorkers.end(); it++)
	{
		if((*it) == worker)
		{
			this->listWorkers.erase(it);
			std::cout << "This " << worker << " was released from this " << this << " workshop" << std::endl;
			break;
		}
	}
}

bool Workshop::findWorker(Worker *worker)
{
	for(std::vector<Worker *>::iterator it = this->listWorkers.begin(); it != this->listWorkers.end(); it++)
	{
		if((*it) == worker)
			return true;
	}
	return false;
}

#endif