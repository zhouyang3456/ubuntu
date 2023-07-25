#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout.setf(ios_base::boolalpha);
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        cout << bool(true) << endl;
    }
    return 0;
}
