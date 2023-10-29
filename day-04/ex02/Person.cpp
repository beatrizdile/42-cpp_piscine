#include <iostream>
#include <vector>
#include "Person.hpp"

Person::Person(std::string p_name): _name(p_name)
{

}

const std::string &Person::getName() const
{
    return _name;
}

Room * Person::room()
{ 
    return (_currentRoom); 
}