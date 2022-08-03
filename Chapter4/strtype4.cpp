#include <iostream>

int main() {
    using namespace std;

    char charr[20];
    string str;

    cout << strlen(charr) << endl;
    cout << str.size() << endl;

    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You entered: " << str << endl;

    cout << strlen(charr) << endl;
    cout << str.size() << endl;

    wchar_t title[] = L"Chief Astrogator";
    char16_t name[] = u"Felonia Ripova";
    char32_t car[] = U"Humber Super";

    cout << sizeof(wchar_t) << endl;    // 4字节
    cout << sizeof(char16_t) << endl;   // 2字节
    cout << sizeof(char32_t) << endl;   // 4字节

    struct torgle_register {
        unsigned int SN : 4;
        unsigned int : 4;
        bool goodIn : 1;
        bool goodTorgle : 1;
    };
    cout << "位段: " << sizeof(torgle_register) << endl;  // 4字节

    struct A {
        int a : 5;
        int b : 3;
    };
    cout << sizeof(A) << endl;
}