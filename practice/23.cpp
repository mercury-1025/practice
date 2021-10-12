#include <iostream>
#include <cmath>
//draw number triangle as input
// example: input is 4
// 1
// 12
// 123
// 1234
//
// like that
using namespace std;
int main() {
	int input = 0;
	cin >> input;
	for (int x = 1; x <= input; x++) {
		for (int y = 1; y <= x; y++) {
			cout << y;
		}
		cout << "\n";
	}
}
