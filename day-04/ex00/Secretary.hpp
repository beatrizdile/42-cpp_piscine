#ifndef Secretary_HPP
#define Secretary_HPP

#include "Staff.hpp"
#include "Form.hpp"

class Secretary : public Staff
{
private:
public:
    Form *createForm(FormType p_formType);
    void archiveForm();
};

#endif