#include <iostream>
#include <cmath>
#include <string>
//input number and if its odd then get sum of all odd from 1 to input
// if its even get sum of all even number from 2 to input
using namespace std;
int main() {
	int in;
	int i;
	int ind2;
	int sum;
	cin >> in;
	if (in % 2 == 1) {
		i = in + 1;
	}
	else {
		i = in;
	}
	ind2 = in / 2;
	sum = (ind2 + 1) * ind2;
	if (in % 2 == 1) {
		cout << sum - in;
	}
	else {
		cout << sum;
	}

}
