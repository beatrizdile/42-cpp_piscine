#include <iostream>
#include <vector>
#include <algorithm>
#include "StudentList.hpp"
#include "Student.hpp"

StudentList::StudentList()
{
}

StudentList::~StudentList()
{
}

void StudentList::registerStudent(Student *student)
{
    students.push_back(student);
}

void StudentList::releaseStudent(Student *studentToDelete)
{
    for(std::vector<Student *>::iterator it = this->students.begin(); it != this->students.end(); it++)
	{
		if((*it) == studentToDelete)
		{
			this->students.erase(it);
			std::cout << "A student was released" << std::endl;
			break;
		}
	}
}

void StudentList::showAllStudents()
{
    size_t size = students.size();

    std::cout << std::endl << "StudentList: " << std::endl;

    if (size > 0)
    {
        for (size_t i = 0; i < size; i++)
        {
            std::cout << i;
            std::cout << " - ";
            std::cout << students[i]->getName() << std::endl;
        }
    }
    else
    {
        std::cout << "No students to show";
    }
}

Student * StudentList::showStudent(std::size_t index)
{
    if (index >= 0 && index <= students.size())
    {
        return students[index];        
    } else {
        std::cout << "Not valid index" << std::endl;
        return NULL;
    }
}
