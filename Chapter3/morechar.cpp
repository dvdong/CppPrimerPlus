#include <iostream>

int main() {
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');
    cout << endl;
    cout << '\a' << endl;

    wchar_t bob = L'P';
    wcout << bob << endl;
    wcout << L"tall" << endl;
    cout << sizeof(wchar_t) << endl;

    char16_t ch1 = 'q';
    char32_t ch2 = 'u';

    wcout << ch1 << endl;
    wcout << ch2 << endl;

    bool is_ready = true;
    int ans = true;
    return 0;
}