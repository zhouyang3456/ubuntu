#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    char ch = 'z';
    char ch2{'H'};
    cout << ch << ": " << static_cast<int>(ch) << endl;
    cout << ch2 << endl;
    double num[5] {1.1};
    cout << num[1] << endl;
    cout << num << endl;
    char fish[] = "i am a fish. ahhhh";
    cout << fish << endl;
    return 0;
}
