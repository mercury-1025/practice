#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int hight = 0;
	cin >> hight;
	//repeat for hight
	for (int x = 0; x < hight; x++) {
		int side = 1 + x * 2;
		int space = 2 * hight - x * 2 - 1;
		for (int z = 1; z <= space; z++) {
			cout << " ";
		}
		for (int y = 1; y <= side; y++) {
			cout << "* ";
		}
		cout << "\n";
	}
}