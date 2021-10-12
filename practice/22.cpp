#include <iostream>
#include <cmath>

using namespace std;
int main() {
	while (true) {
		int input = 0;
		cin >> input;
		if (input <= 0) {
			break;
		}
		else {
			for (int i = 0; i < input; i++) {
				cout << "* ";
			}
			cout << "\n";
		}
	}
}