#include <iostream>
#include <cmath>

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