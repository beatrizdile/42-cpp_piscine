#include <iostream>
#include "FormType.hpp"
#include "Secretary.hpp"
#include "CourseFinished.hpp"
#include "NeedCourseCreation.hpp"
#include "NeedMoreClassRoom.hpp"
#include "SubscriptionToCourse.hpp"

Secretary::Secretary(std::string name) : Staff(name)
{
}

Secretary::~Secretary()
{
}

Form *Secretary::createForm(FormType p_formType)
{
    switch (p_formType)
    {
    case FormType::CourseFinished:
        return new CourseFinished();
        break;

    case FormType::NeedCourseCreation:
        return new NeedCourseCreation();
        break;

    case FormType::NeedMoreClassRoom:
        return new NeedMoreClassRoom();
        break;

    case FormType::SubscriptionToCourse:
        return new SubscriptionToCourse();
        break;

    default:
        break;
    }
}

void Secretary::archiveForm()
{
    std::cout << "Archive Form";
}

void Secretary::sign(Form *p_form)
{
    p_form->toSignSecretary();
    std::cout << "Assinado pela secretary" << p_form;
}