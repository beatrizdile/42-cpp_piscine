#include <iostream>
#include <vector>
#include "Person.hpp"

Person::Person(std::string  p_name): name(p_name)
{
}

const std::string &Person::getName() const
{
	return name;
}

Room *Person::room()
{
	return (currentRoom);
}
