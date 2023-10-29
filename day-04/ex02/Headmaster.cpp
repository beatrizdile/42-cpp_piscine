#include <iostream>
#include "Headmaster.hpp"
#include "Staff.hpp"

Headmaster::Headmaster(std::string name) : Staff(name)
{
}

Headmaster::~Headmaster()
{
}

void Headmaster::receiveForm(Form *p_form)
{
    _formToValidate.push_back(p_form);
}

void Headmaster::executeForm()
{
    for (size_t i = 0; i < _formToValidate.size(); i++)
    {
        sign(_formToValidate[i]);
        _formToValidate[i]->execute();
    }
}

void Headmaster::sign(Form *p_form)
{
    p_form->toSignHeadmaster();
}