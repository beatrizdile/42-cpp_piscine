#include "Form.hpp"

Form::Form(FormType p_formType) : _formType(p_formType), headmasterSigned(false), secretarySigned(false)
{
}

Form::~Form()
{
}

void Form::toSignHeadmaster()
{
    headmasterSigned = true;
}

void Form::toSignSecretary()
{
    secretarySigned = true;
}

bool Form::isSign()
{
    return headmasterSigned;
}
