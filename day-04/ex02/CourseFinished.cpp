#include <iostream>
#include "CourseFinished.hpp"

CourseFinished::CourseFinished() : Form(FormType::CourseFinished)
{
}

CourseFinished::~CourseFinished()
{
}

void CourseFinished::fill(std::string newField1, std::string newField2, std::string newField3)
{
    field1 = newField1;
    field2 = newField2;
    field3 = newField3;
}

void CourseFinished::execute()
{
	if (isSign())
    {
        std::cout << "Headmaster signed: course finished" << std::endl;
    }
    else
    {
        std::cout << "Headmaster did not sign" << std::endl;
    }
}
