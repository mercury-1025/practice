#include <iostream>
#include <cmath>
#include <string>
// output if a year is leap year or not
using namespace std;
int main() {
	int year;
	cin >> year;
	if (year % 400 == 0) {
		cout << "leap year";
	}
	else if (year % 100 != 0 && year % 4 == 0) {
		cout << "leap year";
	}
	else {
		cout << "normie year";
	}
}
