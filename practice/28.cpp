#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
	int input;
	cin >> input;
	int inputh = input / 100;
	int inputt = (input - inputh * 100) / 10;
	int inputo = input % 10;
	cout << inputh + inputt + inputo;
}