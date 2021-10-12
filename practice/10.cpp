#include <iostream>
using namespace std;
// just a starting code
// input 3 numbers and gimme da biggest boi
int main() {
    int in1, in2, in3, out;
    cin >> in1 >> in2 >> in3;
    out = max(in1, in2);
    out = max(out, in3);
    cout << out;
}
