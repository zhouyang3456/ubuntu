#include <iostream>
#include <cfloat>

int main(int argc, char const *argv[])
{
    double f = 2.2e+23;
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout << "f: " << f << std::endl;
    std::cout << "f + 1: " << f + 1 << std::endl;
    std::cout << "f + 1e+12: " << f + 1e+12 << std::endl;
    return 0;
}
