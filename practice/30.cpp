#include <iostream>
#include <cmath>
#include <string>
// input 10 number and give the max and min value
using namespace std;
int main() {
    int i[10];
    for (int n = 0; n < 10; n++) {
        cin >> i[n];
    }
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
