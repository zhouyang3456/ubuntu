#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a = 0;
    std::cout << &a << std::endl;
    int *b = &a;
    int &c = a;
    cout << "hello, vscode success" << endl;
    a = 1;
    return 0;
}
