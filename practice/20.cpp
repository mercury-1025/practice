#include <iostream>
#include <cmath>
//replace all A in a string to astrisk
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
