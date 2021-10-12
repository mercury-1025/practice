#include <iostream>
#include <cmath>
//get absolute value of all input and get their sum of absolute value
// 0 is in the end
using namespace std;
int main() {
	int sum = 0;
	while (true) {
		int input;
		cin >> input;
		if (input == 0) {
			break;
		}
		int absolute = abs(input);
		sum += absolute;
	}
	cout << sum;
}
