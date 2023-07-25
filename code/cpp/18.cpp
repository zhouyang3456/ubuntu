#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    using namespace std;
    ifstream in_file;
    in_file.open("double.txt");
    double value;
    in_file >> value;
    while (in_file.good())
    {
        cout << value << endl;
        in_file >> value;
        /* code */
    }
    
    return 0;
}
