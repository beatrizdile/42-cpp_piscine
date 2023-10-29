#ifndef Person_HPP
#define Person_HPP

#include <string>
#include "Room.hpp"

class Person
{
private:
    std::string _name;
    Room *_currentRoom;

public:
    Person(std::string p_name);
    const std::string &getName() const;
    Room *room();
};

#endif