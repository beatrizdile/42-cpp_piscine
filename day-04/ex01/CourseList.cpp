#include <iostream>

#include <vector>
#include <algorithm>

#include "CourseList.hpp"
#include "Course.hpp"

CourseList::CourseList()
{
}

CourseList::~CourseList()
{
}

void CourseList::registerCourse(Course *course)
{
    courses.push_back(course);
}

void CourseList::releaseCourse(Course *courseToDelete)
{
    for(std::vector<Course *>::iterator it = this->courses.begin(); it != this->courses.end(); it++)
	{
		if((*it) == courseToDelete)
		{
			this->courses.erase(it);
			std::cout << "A course was released" << std::endl;
			break;
		}
	}
}

void CourseList::showAllCourses()
{
    size_t size = courses.size();

    std::cout << std::endl << "CoursesList: " << std::endl;

    if (size > 0)
    {
        for (size_t i = 0; i < size; i++)
        {
            std::cout << i;
            std::cout << " - ";
            std::cout << courses[i]->getName() << std::endl;
        }
    }
    else
    {
        std::cout << "No course to show";
    }
}

Course * CourseList::showCourse(std::size_t index)
{
    if (index >= 0 && index <= courses.size())
    {
        return courses[index];        
    } else {
        std::cout << "Not valid index" << std::endl;
        return NULL;
    }    
}
