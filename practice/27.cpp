#include <iostream>
#include <cmath>
#include <string>

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
