#include <iostream>
#include "25.h"

int main(int argc, char const *argv[])
{
    using namespace school;
    Student xiaoming;
    xiaoming.name = (char*)"xiaoming";
    xiaoming.ID = 12345;
    school::print_student_info(xiaoming);
    return 0;
}
