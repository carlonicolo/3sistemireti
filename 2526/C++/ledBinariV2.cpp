#include <iostream>
#include <array>
using namespace std;

template<size_t N>
void showLED(const array<int, N>& l) {
    const char* colors[] = {"RED", "BLU", "WHITE"};
    for (int i = 0; i < 3; i++) 
        cout << colors[i] << " " << (l[i] ? "HIGH" : "LOW") << endl;
}

template<size_t N>
void showBinary(const array<int, N>& l) {
    for (int b : l) cout << b;
    cout << endl;
}

int main() {
    array<int, 3> num6 = {1, 1, 0};
    array<int, 4> num10 = {1, 0, 1, 0};
    showLED(num6);
    showBinary(num6);
    cout << "" << endl;
    showLED(num10);
    showBinary(num10);
}