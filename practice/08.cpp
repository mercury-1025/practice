#include <iostream>
using namespace std;
// just a starting code
//input number and tell if its odd or even
int main() {
    //using while loops cos idfk how many ppl gonna input reeeeeeeeeeeeeeeeeeee
    while (true) {
        int in1;
        cin >> in1;
        if (in1 == 0) {
            // brak cuz idfk if 0 is odd or even and also me dumb af
            break;
        }
        else if (in1 % 2 == 1) {
            cout << "odd";
        }
        else {
            cout << "even";
        }
    }
}
