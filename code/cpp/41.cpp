#include <iostream>
#include <string>
#include <thread>

using std::string;

int main(int argc, char const *argv[])
{
    string str = string("hello");
    const char * c_str = str.c_str();
    return 0;
}
