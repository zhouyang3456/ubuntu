#include <iostream>
#include <climits>

int main(int argc, char const *argv[])
{
    using namespace std;
    /* code */
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "INT_MAX = " << hex << INT_MAX << endl;
    cout << "INT_MAX + 1 = " << INT_MAX + 1 << endl;
    cout << "INT_MIN = " << INT_MIN << endl;

    return 0;
}
