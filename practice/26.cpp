#include <iostream>
#include <cmath>
#include <string>
// input 1 number and get multiple table for that number
// example input is 7
// 7*1=7
// 7*2=14
// etc until 9
using namespace std;
int main() {
	int input;
	cin >> input;
	for (int i = 1; i < 10; i++) {
		cout << input << " * " << i << " = " << input * i << "\n";
	}
}
