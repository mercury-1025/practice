#include <iostream>
using namespace std;
// just a starting code
// basically get sum of 2 input if its less then 140 its fail if its bigger or same as 140 its pass
int main() {
    int in1, in2;
    cin >> in1 >> in2;
    if (in1 + in2 < 140) {
        cout << in1 + in2 << " FAIL LOL";
    }
    else {
        cout << in1 + in2 << " GG pass";
    }
}
