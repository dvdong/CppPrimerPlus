#include <iostream>

int main() {
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize);   // 读取一行,存入name数组,不超过ArSize-1个字符数
    cout << name << endl;
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << dessert << endl;
    return 0;
}