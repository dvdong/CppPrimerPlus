#include <iostream>
#include <climits>

int main() {
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof 运算符, 对类型使用必须用括号 对变量使用括号可选
    cout << "int is " << sizeof(int) << " bytes" << endl;
    cout << "short is " << sizeof n_short << " bytes" << endl;
    cout << "long is " << sizeof n_long << " bytes" << endl;
    cout << "long long is " << sizeof n_llong << " bytes" << endl;
    cout << endl;

    // 最大值
    cout << "Maxmium values: " << endl;
    cout <<"int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;
    cout << endl;
    // 最小值
    cout << "Minimum values: " << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    int x(12);
    cout << endl << x;

    return 0;
}