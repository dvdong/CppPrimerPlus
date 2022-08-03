#include <iostream>
#include <memory.h>

using namespace std;
struct A {
    int a : 5;
    int b : 3;
};

int main() {
    
    char str[100] = "01343243fjadslfj";
    struct A d;
    memcpy(&d, str, sizeof(A));
    cout << d.a << endl;
    cout << d.b << endl;
    

    // d.a = 128;  // 直接给位域超过大小的赋值会产生警告,赋值也不会生效

    // cout << d.a << endl;

    return 0;
}