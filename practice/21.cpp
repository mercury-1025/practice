#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int input = 0;
	int z = 0;
	cin >> input;
	for (int x = 0; x < input; x++) {
		for (int y = 0; y < input; y++) {
			z++;
			if (z < 10) {
				cout << " " << z << " ";
			}
			else {
				cout << z << " ";
			}
		}
		cout << "\n";
	}
}