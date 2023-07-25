#include <iostream>

// extern int add_int(int, int);

// namespace demo03
// {
//     extern int a;
// } // namespace demo02

// namespace demo02
// {
//     extern int a;
// } // namespace demo02
extern int a;
// static int a = 11;

int main(){
    // std::cout << demo03::a << std::endl;
    // std::cout << add_int(demo02::a, demo03::a) << std::endl;
    int a = 11;
    std::cout << ::a << std::endl;
    return 0;
}

// int add_int(int x, int y){
//     return x + y + 10;
// }
