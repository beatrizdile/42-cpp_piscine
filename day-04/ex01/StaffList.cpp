#include <iostream>
#include <vector>
#include <algorithm>
#include "StaffList.hpp"
#include "Staff.hpp"

StaffList::StaffList()
{
}

StaffList::~StaffList()
{
}

void StaffList::registerStaff(Staff *staff)
{
    staffs.push_back(staff);
}

void StaffList::releaseStaff(Staff *staffToDelete)
{
    for(std::vector<Staff *>::iterator it = this->staffs.begin(); it != this->staffs.end(); it++)
	{
		if((*it) == staffToDelete)
		{
			this->staffs.erase(it);
			std::cout << "A staff was released" << std::endl;
			break;
		}
	}
}

void StaffList::showAllStaffs()
{
    size_t size = staffs.size();

    std::cout << std::endl << "StaffList: " << std::endl;

    if (size > 0)
    {
        for (size_t i = 0; i < size; i++)
        {
            std::cout << i;
            std::cout << " - ";
            std::cout << staffs[i]->getName() << std::endl;
        }
    }
    else
    {
        std::cout << "No staff to show";
    }
}

Staff * StaffList::showStaff(std::size_t index)
{
    if (index >= 0 && index <= staffs.size())
    {
        return staffs[index];        
    } else {
        std::cout << "Not valid index" << std::endl;
        return NULL;
    }
}