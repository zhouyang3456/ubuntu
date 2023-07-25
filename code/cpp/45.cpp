#include <iostream>

const int & increase(int & x) {
    x = x + 1;
    return x;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    int a = 1;
    cout << a << endl;
    
    return 0;
}
