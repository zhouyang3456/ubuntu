// time_point constructors
#include <iostream>
#include <chrono>
#include <iomanip>//若要使用操纵符如setprecision(n)加上头文件

int main()
{
    using namespace std::chrono;
    time_point now = system_clock::now();
    
}