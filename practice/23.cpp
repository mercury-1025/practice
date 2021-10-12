#include <iostream>
#include <cmath>

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