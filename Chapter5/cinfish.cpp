#include <iostream>

const int Max =5;
int main() {
    using namespace std;
    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {  // 当输入类型不匹配时,cin调用的将返回false,循环终止
        if (++i < Max) {
            cout << "fish #" << i + 1 << ": ";
        }
    }
    double total = 0;
    for (double f : fish) {
        total += f;
    }
    if (i == 0) cout << "No fish\n";
    else cout << total / i << endl;
    return 0;
}