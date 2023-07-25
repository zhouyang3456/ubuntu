#include <iostream>
#include <thread>
#include <mutex>
#include <assert.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

int count = 0;
int n;
std::mutex m;

#define CAN_PRODUCE (count < n)
#define CAN_CONSUME (count > 0)

void T_produce()
{
    this_thread::sleep_for(seconds(1));
    while (1)
    {
    retry:
        m.lock();
        if (!CAN_PRODUCE)
        {
            m.unlock();
            goto retry;
        }
        else
        {
            printf("(");
            count++;
            m.unlock();
        }

    }
}

void T_consume()
{
    while (1)
    {
    retry:
        m.lock();
        if (!CAN_CONSUME)
        {
            m.unlock();
            goto retry;
        }
        else
        {
            printf(")");
            count--;
            m.unlock();
        }
        // this_thread::sleep_for(seconds(1));
    }
}

int main(int argc, char const *argv[])
{
    assert(argc == 2);
    n = atoi(argv[1]);
    std::thread t1(T_produce);
    std::thread t2(T_consume);
    t1.join();
    t2.join();
    return 0;
}
