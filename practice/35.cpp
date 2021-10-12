#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
	float a, b, r;
	cin >> a >> b;
	while (true) {
		r = fmod(a, b);
		if (r == 0) {
			break;
		}
		a = b;
		b = r;
	}
	cout << b;
}