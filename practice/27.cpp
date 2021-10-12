#include <iostream>
#include <cmath>
#include <string>
//input 2 number and get number with 1s digit is 3 or 6 or 9 from first input to second
using namespace std;
int main() {
	int input1;
	int input2;
	int output;
	cin >> input1 >> input2;
	if (input1 <= input2) {

		for (int i = input1; i <= input2; i++) {
			if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
				cout << i << "\n";
			}
		}
	}
}
