#include <iostream>
#include <vector>
#include "Student.hpp"

Course::Course(std::string p_name)
{
    this->name = p_name;
    this->numberOfClassToGraduate = 0;
    this->maximumNumberOfStudent = 0;
}

Course::~Course()
{
}

void Course::assign(Professor *p_professor)
{
    this->responsable = p_professor;
    std::cout << "Course professor assigned " << p_professor;
}

void Course::subscribe(Student *p_student)
{
    p_student->subscribedCourse.push_back(this);
    this->students.push_back(p_student);
    std::cout << "Course student subscribed " << p_student;
}

const std::string &Course::getName() const
{
    return name;
}
