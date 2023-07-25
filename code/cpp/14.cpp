#include <iostream>

typedef char* byte_pointer;

int main(int argc, char const *argv[])
{
    using std::cin, std::cout, std::endl;
    // byte_pointer ch = (byte_pointer)"hello world";
    char ch[5] = {'h', 'e', 'l', 'l', 'o'};
    for (char c : {'h', 'e', 'l', 'l', 'o', 'f'})
    {
        cout << c << endl;
    }
    for(int i = 9, j = 1; (i > 0), (j < 10); --i, ++j)
    {
        cout << "i = " << i << " j = " << j << endl;
    }
    return 0;
}
