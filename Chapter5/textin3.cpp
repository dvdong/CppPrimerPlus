#include <iostream>

int main() {
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    EOF;
    while(!cin.fail()) {  // 检查是否读到了EOF字符
        cout << ch;
        ++count;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";
    return 0;
}