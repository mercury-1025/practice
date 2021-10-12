#include <iostream>
#include <cmath>
// output sum of 5 input letters
using namespace std;
int main() {
	string in1,in2,in3,in4,in5;
	cin >> in1 >> in2 >> in3 >> in4 >> in5;
	string sum = in1 + in2 + in3 + in4 + in5;
	int length = sum.length();
	cout << length;
}
