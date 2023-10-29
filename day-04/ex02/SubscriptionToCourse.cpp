#include "SubscriptionToCourse.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

SubscriptionToCourse::SubscriptionToCourse() : Form(FormType::NeedMoreClassRoom)
{
}

SubscriptionToCourse::~SubscriptionToCourse()
{
}

void SubscriptionToCourse::fill(std::string newField1, std::string newField2, std::string newField3)
{
    field1 = newField1;
    field2 = newField2;
    field3 = newField3;
}

void SubscriptionToCourse::execute()
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
