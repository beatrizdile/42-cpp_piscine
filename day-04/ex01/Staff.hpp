#ifndef Staff_HPP
#define Staff_HPP

#include "Person.hpp"
#include "Form.hpp"

class Staff : public Person
{
private:
public:
    Staff(std::string name);
    ~Staff();
    void sign(Form *p_form);
};

#endif // Staff_HPP