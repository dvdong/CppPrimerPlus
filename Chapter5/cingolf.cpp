#include <iostream>

const int Max = 5;
int main() {
    using namespace std;
    double golf[Max];
    cout << "Enter your golf scores: \n";
    for (int i = 0; i < Max; i++) {
        cout << "round # " << i + 1 << ": ";
        while(!(cin >> golf[i])) {
            cin.clear();
            while(cin.get() != '\n');
            cout << "Plear enter a number: ";
        }
    }
    double total = 0;
    for (double s : golf) {
        total += s;
    }
    cout << total / Max << endl;
    return 0;
}