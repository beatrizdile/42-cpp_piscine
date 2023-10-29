#ifndef NeedCourseCreation_HPP
#define NeedCourseCreation_HPP

#include <string>
#include "Form.hpp"

class NeedCourseCreation : public Form
{
private:
    std::string field1;
    std::string field2;
    std::string field3;

public:
    NeedCourseCreation();
    ~NeedCourseCreation();
    void fill(std::string newField1, std::string newField2, std::string newField3);
    void execute();
};

#endif