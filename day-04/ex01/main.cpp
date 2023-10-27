#include <iostream>
#include "StudentList.hpp"
#include "StaffList.hpp"
#include "CourseList.hpp"
#include "RoomList.hpp"
#include "Student.hpp"
#include "Course.hpp"
#include "Room.hpp"

int main()
{

    {
    Student student1("studentBeatriz");
    Student student2("studentGiovanna");
    Student student3("studentVinicius");

    StudentList& studentList1 = StudentList::getInstance();
    StudentList& studentList2 = StudentList::getInstance();

    studentList1.registerStudent(&student1);
    studentList2.registerStudent(&student2);
    studentList1.registerStudent(&student3);

    Student * returnStudent = studentList2.showStudent(0);
    if(returnStudent != NULL)
        std::cout << returnStudent->getName() << std::endl;

    studentList2.showAllStudents();
    studentList2.releaseStudent(&student2);
    studentList1.showAllStudents();
    }

    std::cout << std::endl << "--------------------------------" << std::endl;

    {
    Staff staff1("staffBeatriz");
    Staff staff2("staffGiovanna");
    Staff staff3("staffVinicius");

    StaffList& staffList1 = StaffList::getInstance();
    StaffList& staffList2 = StaffList::getInstance();

    staffList1.registerStaff(&staff1);
    staffList2.registerStaff(&staff2);
    staffList1.registerStaff(&staff3);

    Staff * returnStaff = staffList2.showStaff(0);
    if (returnStaff != NULL)
        std::cout << returnStaff->getName() << std::endl;

    staffList2.showAllStaffs();
    staffList2.releaseStaff(&staff2);
    staffList1.showAllStaffs();
    }

    std::cout << std::endl << "--------------------------------" << std::endl;

    {
    Course course1("courserBeatriz");
    Course course2("courserGiovanna");
    Course course3("courserVinicius");

    CourseList& courseList1 = CourseList::getInstance();
    CourseList& courseList2 = CourseList::getInstance();

    courseList1.registerCourse(&course1);
    courseList2.registerCourse(&course2);
    courseList1.registerCourse(&course3);

    Course * returnCourse = courseList2.showCourse(0);
    if (returnCourse != NULL)
        std::cout << returnCourse->getName() << std::endl;

    courseList1.showAllCourses();
    courseList2.releaseCourse(&course2);
    courseList2.showAllCourses();
    }

    std::cout << std::endl << "--------------------------------" << std::endl;

    {
    Room room1(1);
    Room room2(2);
    Room room3(3);

    RoomList& roomList1 = RoomList::getInstance();
    RoomList& roomList2 = RoomList::getInstance();

    roomList1.registerRoom(&room1);
    roomList2.registerRoom(&room2);
    roomList1.registerRoom(&room3);

      
    Room * returnRoom = roomList2.showRoom(0);
    if (returnRoom != NULL)
        std::cout << returnRoom->getId() << std::endl;

    roomList1.showAllRooms();
    roomList2.releaseRoom(&room2);
    roomList2.showAllRooms();
    }

    return 0;
}
