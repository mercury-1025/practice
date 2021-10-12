#include <iostream>
#include <cmath>
#include <string>
// 이거 엄청 느린데 걍 작동은 되겠지
using namespace std;
int main() {
	int in1;
	int in2;
	cin >> in1 >> in2;
	for (int i = in1; i <= in2; i++) {
		bool isprime = true;
		//i 의 제곱근까지 인수분해 채크
		for (int x = 2; x <= sqrt(i); x++) {
			if (i % x == 0) {
				isprime = false;
				break;
			}
		}
		if (isprime == true) {
			cout << i << " ";
		}
	}
}