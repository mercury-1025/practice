#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
	int i[10];
	cin >> i[0] >> i[1] >> i[2] >> i[3] >> i[4] >> i[5] >> i[6] >> i[7] >> i[8] >> i[9];
	int sout = i[0];
	int lout = i[0];
	for (int x = 0; x < 10; x++) {
		if (lout < i[x]) {
			lout = i[x];
		}
		if (sout > i[x]) {
			sout = i[x];
		}
	}
	cout << lout << "\n" << sout;
}