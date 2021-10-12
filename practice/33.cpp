#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
	int year;
	cin >> year;
	if (year % 400 == 0) {
		cout << "À±³â";
	}
	else if (year % 100 != 0 && year % 4 == 0) {
		cout << "À±³â";
	}
	else {
		cout << "Æò³â";
	}
}