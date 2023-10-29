#ifndef Secretary_HPP
#define Secretary_HPP

#include "Form.hpp"
#include "Staff.hpp"
#include "FormType.hpp"

class Secretary : public Staff
{
private:
public:
    Secretary(std::string name);
    ~Secretary();
    Form *createForm(FormType p_formType);
    void archiveForm();
    void sign(Form *p_form);
};

#endif