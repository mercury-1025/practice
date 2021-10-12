#include <iostream>
#include <cmath>
#include <string>
//input 10 of 0~999 number and output sum of single digit and sum of 2 digit and sum of 3 digit
using namespace std;
int main() {
	int i[10];
	int op1 = 0;
	int op10 = 0;
	int op100 = 0;
    for (int n = 0; n < 10; n++) {
        cin >> i[n];
    }
	for (int x = 0; x < 10; x++) {
		if (i[x] < 10) {
			op1 += i[x];
		}
		if (i[x] >= 10 && i[x] < 100) {
			op10 += i[x];
		}
		if (i[x]>=100) {
			op100 += i[x];
		}
	}
	cout << op1 << "\n" << op10 << "\n" << op100;
}
