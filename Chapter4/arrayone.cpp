#include <iostream>

int main() {
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};
    cout << sizeof yams << endl;
    cout << sizeof yams[0] << endl;

    return 0;
}