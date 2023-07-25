#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>

using namespace std;

mutex mtx;
condition_variable cv;
bool ready = false;

#define CON_PRODUCE (ready == false)
#define CON_CONSUME (ready == true)

void T_produce(){
    while (1){
        unique_lock<mutex> lck(mtx);
        while (!CON_PRODUCE){
            cv.wait(lck);
        }
        cout << "<";
        ready = true;
        cv.notify_all();
        lck.unlock();
    }
}

void T_consume(){
    while (1){
        unique_lock<mutex> lck(mtx);
        while (!CON_CONSUME){
            cv.wait(lck);
        }
        cout << ">";
        ready = false;
        cv.notify_all();
        lck.unlock();
    }
}

int main(int argc, char const *argv[])
{
    thread t1(T_produce);
    thread t2(T_consume);
    t1.join();
    t2.join();
    return 0;
}

