#include <iostream>

int main(int argc, char const *argv[])
{
    int* p = new int;
    *p = 10;
    using namespace std;
    cout << *p << endl; 
    return 0;
}
