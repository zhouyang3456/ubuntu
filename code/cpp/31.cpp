#include <thread>
#include <iostream>

volatile int x = 0;

void T1(){
    x++;    
    std::cout << "i am T1, x = " << x << std::endl;
}

void T2(){
    x++;
    std::cout << "i am T2, x = " << x << std::endl;    
}

int main(int argc, char const *argv[])
{
    std::thread thread1(T1);
    std::thread thread2(T2);
    thread1.join();
    thread2.join();
    return 0;
}
