#include "student.hpp"
#include <iostream>

using namespace school; 

int Student::student_num = 0;

Student::Student(/* args */)
{
    ID_ = 0;
}

// Student::Student(const std::string& name, int ID)
// {
//     name_ = name;
//     ID_ = ID;
// }

Student::Student(const std::string& name, int ID, GRADE grade)
{
    name_ = name;
    ID_ = ID;
    grade_ = grade;
}

Student::~Student()
{
    // std::cout << "destructor] bye " << name_ << std::endl;
}

void Student::print_info() const
{
    std::cout << "name = " << name_ << std::endl;
    std::cout << "ID = " << ID_ << std::endl;
}

const Student& Student::top_id(const Student& s) const
{
    if(s.id() > this->ID_)
        return s;
    else
        return *this;
}