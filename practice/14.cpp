#include <iostream>
using namespace std;
// just a starting code
// theres code for exam and 3 numeber will be givin and you gotta get the sum of all exam price
int main() {
    int price[6]{ 0,5000,6000,7000,10000,20000 };
    //using while loop again cos idk when 000 will come
    while (true) {
        int in1, in2, in3;
        cin >> in1 >> in2 >> in3;
        if (in1 == 0 && in2 == 0 && in3 == 0) {
            break;
        }
        else {
            cout << price[in1] + price[in2] + price[in3];
        }
    }
}
