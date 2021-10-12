#include <iostream>
using namespace std;
// just a starting code
// get sum of all multiple of 3 from 1 until input
// teacher told me to use loops
// i say nah
// teacher say you have to use loops or else theres no way
// i say
// OBSERVE
int main() {
    // idea: get input x, n is x/3, get n-th triangular number as thats all sum of 1~n
    // multiply nth triangular number by 3 to get answer
    int x, n, y;
    cin >> x;
    n = x / 3;
    y = n * (n + 1) / 2;
    cout << y * 3;
}
