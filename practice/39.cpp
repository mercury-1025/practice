#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// just a sort
// took like 5 hours trying to solve it via pankcake sort
int main(){
    int length;
    cin >> length;
    vector<int> input;
    for (int i = 0; i < length; i++) {
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    sort(input.begin(), input.end());

    for (auto x : input) {
        cout << x << " ";
    }
    return 0;
}
