#include <iostream>
#include <string>

using namespace std;
class Student : private string
{
public:
    Student(const string& name) : string(name) {};
    // size_t size() { cout << "Student::size()" << endl; 
    //                 return string::size(); 
    //                 };
    using string::size;
};

int main(int argc, char const *argv[])
{
    Student stu1("zhang san");
    cout << (const string &)stu1 << endl;
    cout << "the length of name is " << stu1.size() << endl;
    return 0;
}
