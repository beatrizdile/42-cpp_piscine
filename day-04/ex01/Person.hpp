#ifndef Person_HPP
#define Person_HPP

#include <string>
#include "Room.hpp"

class Person
{
private:
	std::string name;
	Room *currentRoom;
public:
	Person(std::string p_name);
	~Person(){};
	const std::string &getName() const;
	Room *room();
};

#endif