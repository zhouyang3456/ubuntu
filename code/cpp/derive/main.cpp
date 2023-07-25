#include <iostream>
#include "A.h"
using namespace std;

int main(int argc, char const *argv[])
{
    A* a1 = new A("Jack");
    A* a2 = new B("Tom", 2023);
    a1->info();
    a2->info(); 
    delete a1;
    delete a2;   
    return 0;
}
