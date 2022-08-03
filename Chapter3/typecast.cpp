#include <iostream>

int main() {
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 11.99;
    bats = (int)19.99 + (int)11.99;    // C语法强转
    coots = int(19.99) + int(11.99);   // C++语法强转
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is " << static_cast<int>(ch) << endl; // C++的强转运算符

    auto x = 4;
    auto y = 0.0;
    return 0;
}