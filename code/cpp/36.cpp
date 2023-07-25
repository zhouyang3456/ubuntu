// time_point constructors
#include <iostream>
#include <chrono>
#include <iomanip>//若要使用操纵符如setprecision(n)加上头文件

int main()
{
    using namespace std::chrono;
    typedef duration<double, std::ratio<1, 1>> m_seconds;

    time_point now = system_clock::now();
    // time_point<system_clock> now = system_clock::now();
    auto now_in_seconds = time_point_cast<seconds>(now);
    auto now_in_milliseconds = time_point_cast<milliseconds>(now);
    auto now_in_microseconds = time_point_cast<microseconds>(now);
    auto now_in_hours = time_point_cast<hours>(now);
    auto now_in_nanoseconds = time_point_cast<nanoseconds>(now);
    auto now_in_m_seconds = time_point_cast<m_seconds>(now);
    
    std::cout << "seconds from system clock epoch is "
              << now_in_seconds.time_since_epoch().count()
              << " s"
              << std::endl;
    // std::cout << "hours from system clock epoch is "
    //           << now_in_hours.time_since_epoch().count()
    //           << " hours"
    //           << std::endl;
    // std::cout << "nanoseconds from system clock epoch is "
    //           << now_in_nanoseconds.time_since_epoch().count()
    //           << " nanoseconds"
    //           << std::endl;
    std::cout << "seconds from system clock epoch is "
              << now_in_milliseconds.time_since_epoch().count()
              << " ms"
              << std::endl;
    std::cout << "seconds from system clock epoch is "
              << now_in_microseconds.time_since_epoch().count()
              << " us"
              << std::endl;
    std::cout << "m_seconds from system clock epoch is "
              << std::fixed
              << std::setprecision(6)
              << now_in_m_seconds.time_since_epoch().count()
              << " m_seconds"
              << std::endl;
    return 0;
}