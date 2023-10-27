#ifndef RoomList_HPP
#define RoomList_HPP

#include <vector>

#include "Room.hpp"
#include "Singleton.hpp"

class RoomList: public Singleton<RoomList>
{
private:
    std::vector<Room *> rooms;
    RoomList();
public:
    ~RoomList();
    void registerRoom(Room *room);
    void releaseRoom(Room *room);
    Room * showRoom(std::size_t index);
    void showAllRooms();

    friend class Singleton;
};

#endif