#include <iostream>
using namespace std;

class Autumn {
    public:
        Autumn() {};
        void sayHi(){
            cout << "hi, i am Autumn!" << endl;
        }
};

class Button : public Autumn {
    public:
        Button() {};
        void sayHi(){
            cout << "hi, i am Button!" << endl;
        }
};

class Clear : public Button {
    public:
        Clear() {};
        void sayHi(){
            cout << "hi, i am Clear!" << endl;
        }
};

int main(int argc, char const *argv[])
{
    Button b;
    b.sayHi();
    Clear c;
    c.sayHi();
    return 0;
}
