#include <iostream>
#include <string>
using namespace std;

class A
{
private:
    string name = "nullName";
public:
    A(string name_);
    virtual ~A();
    // ~A();
    virtual void info() const;
    // void info() const;
};

A::A(string name_) : name(name_)
{
}

A::~A()
{
    cout << "delete A" << endl;
}

void A::info() const{
    cout << "A: name is " << name << endl;
}

class B : public A
{
private:
    int ID = 0;
public:
    B(string name_, int ID_);
    ~B();
    // virtual void info() const;
    void info() const;
};

B::B(string name_, int ID_) : A(name_), ID(ID_)
{
}

B::~B()
{
    cout << "delete B" << endl;
}

void B::info() const{
    A::info();
    cout << "B: ID is " << ID << endl;
}