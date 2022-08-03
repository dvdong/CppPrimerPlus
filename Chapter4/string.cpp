#include <iostream>
#include <cstring>

int main() {
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    cout << "Howdy, I'm " << name2;
    cout << "! what's your name?\n";
    cin >> name1;
    cout << "well, " << name1 << endl;
    cout << strlen(name1) << endl;
    cout << sizeof(name1) << endl;
    name2[3] = '\0';
    cout << name2 << endl;
    return 0;
}