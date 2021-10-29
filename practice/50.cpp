#include <iostream>
using namespace std;
// just a starting code

int main() {
    int input;
    cin >> input;
    for (int i = input; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        int out;
        for (out = 1; out <= input - i; out++) {
            cout << out;
        }
        out -= 2;
        while (true) {
            if (out > 0) {
                cout << out;
                out--;
            }
            else {
                break;
            }
        }
        cout << "\n";
    }
}
