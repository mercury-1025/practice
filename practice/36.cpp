#include <iostream>
#include <cmath>
#include <string>
//input 10 number and find number thats closest to 0
using namespace std;
int main() {
	double in[10];
	double sout;
	int s;
	for (int i = 0; i < 10; i++) {
		cin >> in[i];
	}
	double absin[10];
	for (int x = 0; x < 10; x++) {
		absin[x] = abs(in[x]);
	}
	sout = absin[0];
	for (int y = 0; y < 10; y++) {
		if (sout > absin[y]) {
			s = y;
		}
	}
	cout << in[s];
}
