#include <iostream>
#include <cmath>
#include <string>
// input 3 number
// stick second number behind first
// and add third
// example: 123 456 789
// 123456+789
// 124245
using namespace std;
int main() {
	int in1, in2, in3;
	cin >> in1 >> in2 >> in3;
	// code to find out how many digits in2 have
	string in2s = to_string(in2);
	int length = in2s.length();
	// code to multiply in1 by in2's digit length so we can add them
	int newin1 = in1 * pow(10, length);
	cout << in3 + newin1 + in2;
}
