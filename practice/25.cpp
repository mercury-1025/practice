#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main() {
	int input;
	cin >> input;
	string output;
	int x = 1;
	//make a string from 1 to input
	for (int z = 1; z <= input; z++) {
		string zstring = to_string(z);
		output = zstring + output;
	}
	//repeat this input times
	for (int y = 0; y < input; y++) {
		cout << output << "\n";
		output[y] = ' ';
	}
}