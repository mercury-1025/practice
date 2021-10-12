#include <iostream>
using namespace std;
// just a starting code
// input number of month and output how many days there are if its not a value in month output 99 and end of input it 0
int main() {
    // set 13 month file cos i want input to select array
    int numofmonth[13]{ 99,31,28,31,30,31,30,31,31,30,31,30,31 };
    //using while loop cos idfk when 0 gonna appear
    while (true) {
        int in1;
        cin >> in1;
        if (in1 == 0) {
            break;
        }
        else if (in1 > 12) {
            cout << in1 << " - " << "99\n";
        }
        else {
            cout << in1 << " - " << numofmonth[in1] << "\n";
        }
    }
}
