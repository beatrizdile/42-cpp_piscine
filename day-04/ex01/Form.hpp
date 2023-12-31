#ifndef Form_HPP
#define Form_HPP

#include "Person.hpp"
#include "Form.hpp"

enum FormType
{
    CourseFinished,
    NeedMoreClassRoom,
    NeedCourseCreation,
    SubscriptionToCourse
};

class Form
{
private:
    FormType _formType;

public:
    Form(FormType p_formType)
    {
        _formType = p_formType;
    }

    virtual void execute() = 0;
};

#endif