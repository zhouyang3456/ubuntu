#include <iostream>
#include <vector>
#include <array>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v_int(4);  // = {1, 2, 3, 4};
    v_int = {1, 2, 3, 4};
    cout << v_int.at(3) << endl;
    
    array<double, 4> arr = {0.1, 0.2, 0.3, 0.4};
    cout << arr.at(3) << endl;
    
    return 0;
}
