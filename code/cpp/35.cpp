#include <iostream>
#include <chrono>

using namespace std::chrono;

int main(int argc, char const *argv[])
{
    // seconds s(20);
    hours s(20);
    std::cout << "count of seconds s is " << s.count() << std::endl;    
    return 0;
}
