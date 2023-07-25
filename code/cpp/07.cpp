#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    cout << "tell me your name plz: ";
    char name[15]{'\0'};
    // cin >> name;
    cin.getline(name, 15);
    cout << "your name is " << name << endl;
    return 0;
}
