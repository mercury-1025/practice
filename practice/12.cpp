#include <iostream>
using namespace std;
// just a starting code
// input score of korean,english,math exam results
// get the sum and average
// if >=90 its su
// >=80 its wo
// >=70 me
// >=60 yang
// <60 ga
int main() {
    int k, e, m;
    cin >> k >> e >> m;
    int sum = k + e + m;
    int avr = sum / 3;
    if (avr >= 90) {
        cout << sum << " su";
    }
    else if (avr >= 80) {
        cout << sum << " wo";
    }
    else if (avr >= 70) {
        cout << sum << " me";
    }
    else if (avr >= 60) {
        cout << sum << " yang";
    }
    else {
        cout << sum << " ga";
    }
}
