#include <iostream>
using namespace std;
// just a starting code
// get everyones weight in class and get the subtraction of heaviest and lightest
int main() {
    int in[9];
    for (int i = 0; i < 9; i++) {
        cin >> in[i];
    }
    int sout = in[0], lout = in[0];
    for (int x = 0; x < 9; x++) {
        if (lout < in[x]) {
            lout = in[x];
        }
        if (sout > in[x]) {
            sout = in[x];
        }
    }
    cout << lout - sout;
}
