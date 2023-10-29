#ifndef CourseFinished_HPP
#define CourseFinished_HPP

#include "Form.hpp"

class CourseFinished  : public Form
{
private:
	std::string field1;
	std::string field2;
	std::string field3;
public:
	CourseFinished();
	~CourseFinished();
	void fill(std::string newField1, std::string newField2, std::string newField3);
    void execute();
};

#endif