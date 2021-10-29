#include <iostream>
#include <vector>
using namespace std;
// just a starting code

int main() {
    string input;
    cin >> input;
    int count = 1;
    vector<int> length;
    vector<char> symbol;
    char lexi = ' ';
    for (int i = 0; i < input.length(); i++) {
        if (lexi != input[i]) {
            length.push_back(count);
            symbol.push_back(lexi);
            lexi = input[i];
            count = 0;
        }
        count++;
    }
    length.push_back(count);
    symbol.push_back(lexi);
    for (int j = 1; j < size(length) && j < size(symbol); j++) {
        if (length[j] < 5) {
            for (int k = 0; k < length[j]; k++) {
                cout << symbol[j];
            }
            
        }
        else {
            cout << symbol[j] << "(" << length[j] << ")";
        }
    }

}
