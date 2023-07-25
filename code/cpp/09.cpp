#include <iostream>

int main(int argc, char const *argv[])
{
    int* p_array = new int [10];
    p_array[0] = 1;
    p_array[1] = 2;
    p_array[2] = 3;
    p_array[3] = 4;
    using namespace std;
    cout << p_array[0] << p_array[1] << p_array[2] << endl;
    p_array = p_array + 1;
    cout << p_array[0] << p_array[1] << p_array[2] << endl;
    p_array = p_array - 1;
    delete [] p_array;
    p_array = nullptr;
    delete [] p_array;

    return 0;
}
