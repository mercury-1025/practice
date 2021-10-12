#include <iostream>
#include <cmath>
using namespace std;
int main() {
    unsigned long long input; // just a input
    bool result = true;
    cin >> input;
    // check if its smaller then 2
    if (input < 2) {
        result = false;
    }
    if (input % 2 == 0) {
        result = false;
    }
    if (input == 2) {
        result = true;
    }
    for (int i = 2; i * i <= input; i++) {
        if (input % i == 0) {
            result = false;
            break;
        }
    }
    cout << result;
}
