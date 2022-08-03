#include <iostream>

int main() {
    using namespace std;

    cout << "enter your height:_____\b\b\b\b\b";
    int height = 0;
    cin >> height;
    const float scale = 3.0;
    height *= scale;
    cout << "new height = " << height << endl;
    return 0;
}