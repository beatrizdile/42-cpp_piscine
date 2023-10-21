#ifndef WORKER_HPP
#define WORKER_HPP

#include <iostream>
#include <vector>
#include "Tool.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"
class Tool;
class Shovel;
class Hammer;


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
		Position coordonnee;
		Statistic stat;
		std::vector<Tool *> workerTools;
		Tool *findTool(Tool *tool);
		bool hasTool();
		void work();
		void useTools();
	public:
		Worker(int level, int exp);
		~Worker();
		void getTool(Tool *newShovel);
		void takeAwayTool(Tool *tool);
	
	friend class Workshop;
};

Worker::Worker(int level, int exp)
{
	this->coordonnee.x = 0;
	this->coordonnee.y = 0;
	this->coordonnee.z = 0;
	this->stat.level = level;
	this->stat.exp = exp;
}

Worker::~Worker()
{
	for(std::vector<Tool *>::iterator it = this->workerTools.begin(); it != this->workerTools.end(); it++)
		(*it)->workerUsing = NULL;
}

bool Worker::hasTool()
{
	for(std::vector<Tool *>::iterator it = this->workerTools.begin(); it != this->workerTools.end(); it++)
	{
		return true;
	}
	return false;
}

Tool *Worker::findTool(Tool *tool)
{
	for(std::vector<Tool *>::iterator it = this->workerTools.begin(); it != this->workerTools.end(); it++)
	{
		if((*it) == tool)
			return (*it);
	}
	return NULL;
}

void Worker::getTool(Tool *newTool)
{
	if(this->findTool(newTool) != NULL)
		this->findTool(newTool)->workerUsing = NULL;
	if(newTool->workerUsing != NULL)
		(*newTool->workerUsing).takeAwayTool(newTool);
	this->workerTools.push_back(newTool);
	newTool->workerUsing = this;
	std::cout << "This " << this << " worker got this " << newTool << " tool" << std::endl;
}

void Worker::takeAwayTool(Tool *tool)
{
	for(std::vector<Tool *>::iterator it = this->workerTools.begin(); it != this->workerTools.end(); it++)
	{
		if ((*it) == tool)
		{
			(*it)->workerUsing = NULL;
			this->workerTools.erase(it);
			std::cout << "This " << this << " worker lost this " << tool << " tool" << std::endl;
			break;
		}
	}
}

void Worker::useTools()
{
	for(std::vector<Tool *>::iterator it = this->workerTools.begin(); it != this->workerTools.end(); it++)
	{
		(*it)->use();
		std::cout << "  using this " << (*it) << " tool, which has been used " << (*it)->numberOfUses << " times" << std::endl;
	}
}

void Worker::work()
{
	if (this->hasTool()){
		std::cout << "This " << this << " worker is working" << std::endl;
		this->useTools();
	}
	else
		std::cout << "This " << this << " worker can't work, does't have a tool" << std::endl;
}

#endif
