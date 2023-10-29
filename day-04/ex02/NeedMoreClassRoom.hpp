#ifndef NeedMoreClassRoom_HPP
#define NeedMoreClassRoom_HPP

#include <string>
#include "Form.hpp"

class NeedMoreClassRoom : public Form
{
private:
    std::string field1;
    std::string field2;
    std::string field3;

public:
    NeedMoreClassRoom();
    ~NeedMoreClassRoom();
    void fill(std::string newField1, std::string newField2, std::string newField3);
    void execute();
};


#endif