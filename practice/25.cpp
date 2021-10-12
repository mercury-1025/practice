#include <iostream>
#include <cmath>
#include <string>
// input number smaller then 10 and output a number triangle but its reversed
// example: input is 5
// 12345
//  2345
//   345
//    45
//     5
// 
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
