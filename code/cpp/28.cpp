#include <iostream>
#include "student.hpp"

int main(int argc, char const *argv[])
{
    // {
    //     school::Student stu1("xiaoming", 12345);
    //     stu1.print_info();
    // }
    school::Student stu1("xiaoming", 12345);
    // delete &stu1;
    // stu1.~Student();
    stu1.print_info();
    return 0;
}
