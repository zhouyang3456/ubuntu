#include <iostream>

struct Subject
{
    int math;
    int chinese;
};


struct Student
{
    int id;
    Subject subj;
};

int main(int argc, char const *argv[])
{
    Student* xiaoming;
    xiaoming->subj.math = 1;
    return 0;
}