#include "student.hpp"
using namespace school;

Student::Student(char *name, int ID)
{
    name = name;
    ID = ID;
}

Student::~Student()
{
    std::cout << name << " is deleted!!!" << std::endl;
}

void Student::print_info()
{
    using std::cout, std::endl;
    cout << "name is " << name << endl;
    cout << "ID is " << ID << endl;
}