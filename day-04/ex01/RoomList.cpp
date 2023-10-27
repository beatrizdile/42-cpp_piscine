#include <iostream>
#include <vector>
#include <algorithm>
#include "RoomList.hpp"
#include "Room.hpp"

RoomList::RoomList()
{
}

RoomList::~RoomList()
{
}

void RoomList::registerRoom(Room *room)
{
    rooms.push_back(room);
}

void RoomList::releaseRoom(Room *roomToDelete)
{
    for(std::vector<Room *>::iterator it = this->rooms.begin(); it != this->rooms.end(); it++)
	{
		if((*it) == roomToDelete)
		{
			this->rooms.erase(it);
			std::cout << "A room was released" << std::endl;
			break;
		}
	}
}

void RoomList::showAllRooms()
{
    size_t size = rooms.size();

    std::cout << std::endl << "RoomsList: " << std::endl;

    if (size > 0)
    {
        for (size_t i = 0; i < size; i++)
        {
            std::cout << i;
            std::cout << " - ";
            std::cout << rooms[i]->getId() << std::endl;
        }
    }
    else
    {
        std::cout << "No room to show";
    }
}

Room * RoomList::showRoom(std::size_t index)
{
    if (index >= 0 && index <= rooms.size())
    {
        return rooms[index];        
    } else {
        std::cout << "Not valid index" << std::endl;
        return NULL;
    }
}
