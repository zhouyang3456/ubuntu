#include <iostream>
#include <chrono>
#include <ctime>

void print_time_now(){
    std::chrono::time_point now = std::chrono::system_clock::now();
    std::time_t time_stamp = std::chrono::system_clock::to_time_t(now);
    std::cout << std::ctime(&time_stamp);
}

int main(int argc, char const *argv[])
{
    print_time_now();
    return 0;
}
