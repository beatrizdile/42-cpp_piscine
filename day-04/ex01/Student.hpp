#ifndef Student_HPP
#define Student_HPP

#include <vector>
#include "Person.hpp"
#include "Classroom.hpp"
#include "Course.hpp"

class Student : public Person
{
	private:
		std::vector<Course *> subscribedCourse;
	
	public:
		Student(std::string name);
		~Student();
		void attendClass(Classroom *p_classroom);
		void exitClass();
		void graduate(Course *p_course);

	friend class Course;
};

#endif