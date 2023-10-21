#ifndef TOOL_HPP
#define TOOL_HPP

#include "Worker.hpp"
class Worker;

class Tool
{
	protected:
		int numberOfUses;
		Worker *workerUsing;
		virtual void use();
	public:
		Tool();
		virtual ~Tool();
	
	friend class Worker;
};

Tool::Tool() : numberOfUses(0), workerUsing(NULL)
{

}

Tool::~Tool()
{
}

void Tool::use()
{
	this->numberOfUses++;
}

#endif