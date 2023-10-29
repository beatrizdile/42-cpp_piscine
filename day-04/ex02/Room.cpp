#include <vector>
#include <iostream>
#include <iterator>
#include "Person.hpp"
#include "Form.hpp"
#include "Room.hpp"

Room::Room(int id) : id(id)
{

}

bool Room::canEnter(Person *person)
{
	std::cout << "Can enter " << person->getName();
	return true;
}

void Room::enter(Person *person)
{
	this->occupants.push_back(person);
	std::cout << person->getName() << " entered" << std::endl;
}

void Room::exit(Person *person)
{
	for(std::vector<Person *>::iterator it = this->occupants.begin(); it != this->occupants.end(); it++)
	{
		if ((*it) == person)
		{
			this->occupants.erase(it);
			std::cout << person->getName() << " left" << std::endl;
		}
	}
}

const int &Room::getId() const
{
	return id;
}

void Room::printOccupant()
{
	for(std::vector<Person *>::iterator it = this->occupants.begin(); it != this->occupants.end(); it++)
	{
		std::cout << (*it)->getName();
	}
}
