#include <iostream>

template <typename T, typename T1>
T max(T a, T b, T1 c) {
	return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    std::cout << "the max of a & b is " << max(a, b, 1) << std::endl;
    return 0;
}
