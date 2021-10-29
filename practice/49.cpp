#include <iostream>
using namespace std;
// just a starting code

int main() {
    int input;
    cin >> input;
    for (int i = 0; i < input; i++) {
        for (int j = 0; j < input; j++) {
            int num = input * input - input * j - i;
            cout << num;
        }
        cout << "\n";
    }
}
