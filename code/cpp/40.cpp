#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    using std::ofstream;
    ofstream os;
    os.open("friday.txt");
    os << "hello\n";
    os << "world\n";
    os.close();
    return 0;
}
