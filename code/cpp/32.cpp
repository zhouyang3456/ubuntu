#include <regex>
#include <iostream>
using namespace std;

int main() {
    string s = "123456 abc 456 def";
    regex re("\\d+");
    string result = regex_replace(s, re, "***");
    cout << result << endl;  // 输出 "*** abc *** def"
    return 0;
}