#include "Graph.hpp"
#include <iostream>
#include <iterator>

Graph::Graph(float x, float y)
{
	this->size.x = x;
	this->size.y = y;
}

Graph::~Graph()
{
	for (Vector2 * ptr : listVector2)
		delete ptr;
}

bool Graph::findPosition(float x, float y)
{
	for(std::vector<Vector2 *>::iterator it = this->listVector2.begin(); it != this->listVector2.end(); it++)
	{
		if((*it)->x == x && (*it)->y == y)
			return true;
	}
	return false;
}

void Graph::printMap()
{
	for(int y=0; y <= this->size.y; y++)
	{
		std::cout << this->size.y - y;
		for(int x=0; x <= this->size.x; x++)
		{
			if (findPosition(x, this->size.y - y) == true)
				std::cout << " X ";
			else
				std::cout << " . ";
		}
		std::cout << std::endl;
	}
	for(int i=0; i<=this->size.x; i++)
	{
		std::cout << "  " << i;
	}
}

void Graph::addVector(float x, float y)
{
	if (!findPosition(x, y))
	{
		Vector2 *vector2 = new Vector2();
		vector2->x = x;
		vector2->y = y;
		this->listVector2.push_back(vector2);
	}
}
