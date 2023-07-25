#ifndef __STUDENT__
#define __STUDENT__
#include <iostream>
namespace school
{
    class Student
    {
    private:
        char* name;
        int ID;
    public:
        Student(char* name, int ID);
        ~Student();
        void print_info();
    };
} // namespace school

#endif