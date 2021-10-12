#include <iostream>
#include <cmath>
#include <string>
// get all of its factor of input
// this seems very not optimized
using namespace std;
int main() {
	int in;
	cin >> in;
	for (int i=1; i <= in; i++) {
		if (in % i == 0) {
			cout << i << " ";
		}
	}
}
