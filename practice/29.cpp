#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
	int i[10];
	int op1 = 0;
	int op10 = 0;
	int op100 = 0;
	cin >> i[0] >> i[1] >> i[2] >> i[3] >> i[4] >> i[5] >> i[6] >> i[7] >> i[8] >> i[9];
	for (int x = 0; x < 10; x++) {
		if (i[x] < 10) {
			op1 += i[x];
		}
		if (i[x] >= 10 && i[x] < 100) {
			op10 += i[x];
		}
		if (i[x]>=100) {
			op100 += i[x];
		}
	}
	cout << op1 << "\n" << op10 << "\n" << op100;
}