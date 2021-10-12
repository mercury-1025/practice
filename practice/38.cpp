#include <iostream>
using namespace std;
// just a starting code
// get train ticket price
int main() {
    double traincode[3][7]{
        //array 0 normal price and first one (0th one) is blank as code 1 for location is none existant
        //edit this to edit the normal train price
        {0,5500,7000,8500,9500,12000,20000},
    };
    //code that generates the price for student and normal
    for (int x = 1; x < 7; x++) {
        // set student train code (traincode[1][x]) as normal price multiplied by discount
        traincode[1][x] = traincode[0][x] * 0.8;
        // set normal train code (traincode[2][x]) as normal price multiplied by discount
        traincode[2][x] = traincode[0][x] * 0.9;
    }
    // to calculate the price
    // since i do not know when to stop i will use while loops
    while (true) {
        int type, location, amount;
        cin >> type >> location >> amount;
        if (type == 0 && location == 0 && amount == 0) {
            break;
        }
        else {
            cout << traincode[type][location] * amount << "\n";
        }
    }
}
