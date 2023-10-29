#ifndef Form_HPP
#define Form_HPP

#include <string>
#include "FormType.hpp"

class Form
{
private:
    FormType _formType;
    bool headmasterSigned;
    bool secretarySigned;

protected:
    void toSignHeadmaster();
    void toSignSecretary();

public:
    Form(FormType p_formType);
    ~Form();

    bool isSign();
    virtual void execute() = 0;
    virtual void fill(std::string newField1, std::string newField2, std::string newField3) = 0;

    friend class Headmaster;
    friend class Secretary;
};

#endif