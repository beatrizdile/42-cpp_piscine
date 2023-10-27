#ifndef CourseList_HPP
#define CourseList_HPP

#include <vector>

#include "Course.hpp"
#include "Singleton.hpp"

class CourseList: public Singleton<CourseList>
{
private:
    std::vector<Course *> courses;
    CourseList();
public:
    ~CourseList();
    void registerCourse(Course *course);
    void releaseCourse(Course *course);
    Course * showCourse(std::size_t index);
    void showAllCourses();

    friend class Singleton;
};

#endif