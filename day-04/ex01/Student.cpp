#include <iostream>
#include <vector>
#include "Student.hpp"

Student::Student(std::string name) : Person(name)
{
}

Student::~Student()
{

}


void Student::attendClass(Classroom *p_classroom) 
{
    std::cout << "Subscribed to a Classroom" << p_classroom;
}

void Student::exitClass()
{
    std::cout << "Left a Classroom";
}

void Student::graduate(Course *p_course)
{
    std::cout << "Graduated a Classroom" << p_course;
}
