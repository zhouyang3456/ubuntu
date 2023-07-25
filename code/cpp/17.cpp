#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    using namespace std;
    ofstream out_file;
    out_file.open("readme.txt");
    out_file << "hello, i am zy" << endl;
    out_file << "nice to see you!" << endl;
    out_file.close();
    return 0;
}

