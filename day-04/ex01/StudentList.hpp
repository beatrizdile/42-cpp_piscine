#ifndef StudentList_HPP
#define StudentList_HPP

#include <vector>

#include "Student.hpp"
#include "Singleton.hpp"

class StudentList: public Singleton<StudentList>
{
private:
    std::vector<Student *> students;
    StudentList();
public:
    ~StudentList();
    void registerStudent(Student *student);
    void releaseStudent(Student *student);
    Student * showStudent(std::size_t index);
    void showAllStudents();

    friend class Singleton;
};

#endif