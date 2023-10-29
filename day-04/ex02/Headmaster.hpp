#ifndef Headmaster_HPP
#define Headmaster_HPP

#include "Staff.hpp"
#include "Form.hpp"

class Headmaster : public Staff
{
private:
    std::vector<Form *> _formToValidate;

public:
    Headmaster(std::string name);
    ~Headmaster();
    void receiveForm(Form *p_form);
    void executeForm();
    void sign(Form *p_form);
};

#endif