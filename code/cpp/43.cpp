#include <iostream>
#include <chrono>
#include <thread>

int main(int argc, char const *argv[])
{
    while (1)
    {
        std::cout << "hello world" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }

    return 0;
}
