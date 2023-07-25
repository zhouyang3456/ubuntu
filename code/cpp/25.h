namespace school
{
    #include <iostream>

    struct Student
    {
        char* name;
        int ID;
    };

    void print_student_info(Student stu){
        std::cout << "name: " << stu.name <<std::endl;
        std::cout << "ID: " << stu.ID << std::endl;   
    }
} // namespace scholl
