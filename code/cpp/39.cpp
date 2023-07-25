#include <random>
#include <iostream>
#include <thread>
#include <chrono>

int min_ = -100, max_ = 100;
int sum = 0;
size_t count = 0;

using namespace std;

void T_random_sum()
{
    while (1)
    {
        random_device seed;                             // 硬件生成随机数种子
        ranlux48 engine(seed());                        // 利用种子生成随机数引擎
        uniform_int_distribution<> distrib(min_, max_); // 设置随机数范围，并为均匀分布
        int random = distrib(engine);                   // 随机数
        sum += random;
        count++;
        if (count == 1000 || count == 10000 ||
            count == 100000 || count == 1000000 || count == 10000000)
        {
            std::cout << "count[" << count << "] ";
            std::cout << "sum = " << sum << std::endl;
        }
        // std::this_thread::sleep_for(std::chrono::microseconds(10));
    }
}

int main()
{
    std::thread t1(T_random_sum);
    t1.join();
    return 0;
}