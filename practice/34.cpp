#include <iostream>
#include <cmath>
#include <string>
// input 2 number and get all primes between them in order
using namespace std;
int main() {
	int in1;
	int in2;
	cin >> in1 >> in2;
	for (int i = in1; i <= in2; i++) {
		bool isprime = true;
		for (int x = 2; x <= sqrt(i); x++) {
			if (i % x == 0) {
				isprime = false;
				break;
			}
		}
		if (isprime == true) {
			cout << i << " ";
		}
	}
}
