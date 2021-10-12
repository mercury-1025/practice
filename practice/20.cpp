#include <iostream>
#include <cmath>

using namespace std;
int main() {
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 'A') {
			input[i] = '*';
		}
	}
	cout << input;
}