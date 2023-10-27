#ifndef Course_HPP
#define Course_HPP

#include <string>
#include <vector>
class Student;
class Professor;

class Course
{
private:
    std::string name;
    Professor *responsable;
    std::vector<Student *> students;
    int numberOfClassToGraduate;
    int maximumNumberOfStudent;

public:
    Course(std::string p_name);
    ~Course();
    void assign(Professor *p_professor);
    void subscribe(Student *p_student);
    const std::string &getName() const;
};

#endif