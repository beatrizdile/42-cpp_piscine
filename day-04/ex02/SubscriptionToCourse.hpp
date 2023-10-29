#ifndef SubscriptionToCourse_HPP
#define SubscriptionToCourse_HPP

#include "Form.hpp"

class SubscriptionToCourse : public Form
{
private:
    std::string field1;
    std::string field2;
    std::string field3;

public:
    SubscriptionToCourse();
    ~SubscriptionToCourse();
    void fill(std::string newField1, std::string newField2, std::string newField3);
    void execute();
};

#endif