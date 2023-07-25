#include <thread>
#include <iostream>
#include <condition_variable>
#include <mutex>
#include <chrono>
 
using namespace std;

size_t count = 0;
condition_variable cv;
mutex mtx;

#define sleep (this_thread::sleep_for(chrono::seconds(1)))

void T_produce() {
    while (1) {
        unique_lock<mutex> lck(mtx);
        while ( count != 0 ) {
            cout << "T_produce";
            cv.wait(lck);
        }
        cout << "<";
        cout.flush();
        count++;
        // sleep;
        lck.unlock();
    // this_thread::sleep_for(chrono::seconds(1));
        cv.notify_all();
    }
} 

void T_consume() {
    while (1) {
        unique_lock<mutex> lck(mtx);
        while ( count == 0 ) {
            cv.wait(lck);
        }
        cout << ">";
        cout.flush();
        count--;
        // sleep;
        lck.unlock();
        // this_thread::sleep_for(chrono::seconds(1));
        cv.notify_all();
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
