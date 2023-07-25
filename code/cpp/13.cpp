#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    int a{1};
    a + 1;
    {
        int a = 3;
        cout << "a = " << a << endl;
    }
    cout << "a = " << a << endl;
    return 0;
}
