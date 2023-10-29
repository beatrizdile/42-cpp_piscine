#include <iostream>
#include "Secretary.hpp"
#include "Headmaster.hpp"
#include "FormType.hpp"
#include "Form.hpp"
#include "CourseFinished.hpp"
#include "NeedCourseCreation.hpp"
#include "NeedMoreClassRoom.hpp"
#include "SubscriptionToCourse.hpp"

int main()
{
    Secretary secretary("Beatriz");

    Form *formulario1 = secretary.createForm(FormType::CourseFinished);
    formulario1->execute();
    Form *formulario2 = secretary.createForm(FormType::NeedCourseCreation);
    formulario2->execute();
    Form *formulario3 = secretary.createForm(FormType::NeedMoreClassRoom);
    formulario3->execute();
    Form *formulario4 = secretary.createForm(FormType::SubscriptionToCourse);
    formulario4->execute();

    formulario1->fill("Field1", "Field2", "Field3");
    formulario2->fill("Field1", "Field2", "Field3");
    formulario3->fill("Field1", "Field2", "Field3");
    formulario4->fill("Field1", "Field2", "Field3");

    Headmaster headmaster("Director");
    headmaster.receiveForm(formulario1);
    headmaster.receiveForm(formulario2);
    headmaster.receiveForm(formulario3);
    headmaster.receiveForm(formulario4);
    headmaster.executeForm();

    std::cout << std::endl << "After all was signed: " << std::endl;
    formulario1->execute();

    return 0;
}
