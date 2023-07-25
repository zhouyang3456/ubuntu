#include "student.hpp"
#include <iostream>

using namespace school;

const int NUM = 4;

int main(int argc, char const *argv[])
{
    // school::Student stu1("zhouyang", 100);
    // stu1.print_info();
    // stu1 = school::Student("yaoming", 200);
    school::Student stu[NUM] = {
        school::Student("x", 100, school::Student::grade_two),
        school::Student("a", 50),
        school::Student("b", 200),
        school::Student("y", 150)
    };
    school::Student top = stu[0];
    for(int i = 1; i < NUM; i++){
        top = stu[i].top_id(top);
    }
    std::cout << "top]: \n";
    top.print_info();
    
    std::cout << "months in a year is " << school::Student::MONTHS << std::endl;

    return 0;
}
