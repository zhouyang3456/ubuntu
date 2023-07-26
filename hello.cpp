#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
void T_produce() {
    while (1)
    {
        cout << "<>";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
    }
}

int main(int argc, char const *argv[])
{
    using namespace std;
    thread t1(T_produce);
    t1.join();    
    return 0;
}
