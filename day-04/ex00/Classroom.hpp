#ifndef Classroom_HPP
#define Classroom_HPP

#include "Room.hpp"
#include "Course.hpp"

class Classroom : public Room
{
private:
    Course *_currentRoom;

public:
    Classroom();
    void assignCourse(Course *p_course);
};

#endif // Classroom_HPP