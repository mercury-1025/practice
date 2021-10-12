
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int w[9];
    cin >> w[0] >> w[1] >> w[2] >> w[3] >> w[4] >> w[5] >> w[6] >> w[7] >> w[8];
    int weightc = 0;
    double sum = 0;
    double avrh;
    double avr;
    for (int i = 0; i < 9; i++) {
        if (w[i] > 60) {
            weightc++;
            sum += w[i];
        }
    }
    cout << fixed; 
    cout.precision(2);
    /*avrh = sum*100 / weightc;
    avrh = floor(avrh);
    avr = avrh / 100;*/
    avr = sum / weightc;
    cout << weightc << "\n" << avr;
}
