#include <iostream>

int main() {
    using namespace std;

    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "chest = " << chest << " (decimal)" << endl;
    // 用十六进制输出
    cout << hex;
    cout << "waist = " << waist << " (hexadecimal)" << endl;
    // 用八进制输出
    cout << oct;
    cout << "inseam = " << inseam << " (octal)" << endl;

    return 0;
}