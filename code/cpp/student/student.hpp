#ifndef __STUDENT__
#define __STUDENT__
#include <string>
namespace school
{
class Student
{
public:
    enum GRADE { grade_one = 1, grade_two, grade_three };
private:
    std::string name_;
    int ID_;
    GRADE grade_;
    static int student_num;
public:
    static const int MONTHS = 12;
    Student(/* args */);
    Student(const std::string& name, int ID, GRADE grade = grade_one);
    ~Student();
    void print_info() const;
    inline int id() const { return ID_; };
    const Student& top_id(const Student& s) const;
};
} // namespace name

#endif