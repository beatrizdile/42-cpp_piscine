#include <iostream>
#include "Form.hpp"
#include "Staff.hpp"

Staff::Staff(std::string name) : Person(name)
{
 
}

Staff::~Staff()
{
    
}

void Staff::sign(Form *p_form)
{
    std::cout << "Assinando o Form" << p_form;
}
