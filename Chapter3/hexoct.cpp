#include <iostream>

int main() {
    using namespace std;
    int chest = 42;
    int waist = 0x42;   // 十六进制
    int inseam = 042;   // 第一位位0，第二位为1-7，则是八进制

    // cout默认用十进制输出整数
    cout << "chest = " << chest << endl;
    cout << "waist = " << waist << endl;
    cout << "inseam = " << inseam << endl;

    return 0;
}