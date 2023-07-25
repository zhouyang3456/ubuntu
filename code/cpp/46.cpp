#include <valarray>
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    valarray<double> va1 = {3.14, 0.77, 2.56, 4.39};
    cout << va1.sum();    
    cout << endl;
    return 0;
}
