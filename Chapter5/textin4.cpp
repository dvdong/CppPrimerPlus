#include <iostream>
#include <climits>

int main() {
    using namespace std;
    int ch;   // 用int声明字符
    int count = 0;
    while((ch = cin.get()) != EOF) {
        cout.put(char(ch));
        ++count;
    } 
    INT_MAX;
    cout << endl << count << " characters read\n";
    return 0;
}