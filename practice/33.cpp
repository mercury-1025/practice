#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
	int year;
	cin >> year;
	if (year % 400 == 0) {
		cout << "����";
	}
	else if (year % 100 != 0 && year % 4 == 0) {
		cout << "����";
	}
	else {
		cout << "���";
	}
}