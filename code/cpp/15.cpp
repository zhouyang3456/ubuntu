#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "input; Enter # to stop: ";
    char ch;
    // cin.get(ch);
    while ((ch = cin.get()) != EOF)
    {
        cout.put(ch);
    }
    // cout << endl;
    return 0;
}
