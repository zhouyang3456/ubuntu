#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 1;
    auto p = &i;
    using namespace std;
    cout << *p << endl;
    return 0;
}
