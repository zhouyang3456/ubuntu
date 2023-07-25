#include <chrono>
#include <ctime>
#include <iostream>
#include <string>
using std::string;

class Customer
{
private:
    string arrive_time;
    string leave_time;
    char* time_now();
public:
    Customer();
    ~Customer();
    friend std::ostream& operator<<(std::ostream& os, const Customer& customer);
};

Customer::Customer(/* args */)
{
    arrive_time = time_now();
}

Customer::~Customer()
{
    leave_time = time_now();
    std::cout << "leave_time: " << leave_time;
}

char* Customer::time_now(){
    std::chrono::time_point now = std::chrono::system_clock::now();
    std::time_t time_stamp = std::chrono::system_clock::to_time_t(now);
    return std::ctime(&time_stamp);
}

std::ostream& operator<<(std::ostream& os, const Customer& customer){
    os << customer.arrive_time;
    return os;
}