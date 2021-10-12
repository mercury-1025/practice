#include <iostream>
#include <vector>

using namespace std;
// just a starting code

// first input is number of inputs
// and rest of input is number you gotta sort
// output the number sorted
// my version of pancakesort but im korean so its Buchimgae sort

// the flipping of Number
void Spatula(vector<int> unsorted, int flipplace) {
    int tempflip, startflip = 0;
    while (startflip < flipplace) {
        // swaps 2 numbers from start to flipplace
        tempflip = unsorted[startflip];
        unsorted[startflip] = unsorted[flipplace];
        unsorted[flipplace] = tempflip;
        // reduce both value by 1 so they approach eactother at middle so they dont overflip
        startflip++;
        flipplace--;
    }
}
// finding Where is the biggest number
int Bigone(vector<int>unsorted,int currentsize) {
    //just a normal biggest number finder no big deal here
    int Bignumberlocation, i;
    for (Bignumberlocation = 0, i = 0; i < currentsize; i++) {
        if (unsorted[i] > unsorted[Bignumberlocation]) {
            Bignumberlocation = i;
        }
    }
    return Bignumberlocation;
}

// the actual main part of my bad code
int Buchimgaesort(vector<int> unsorted,int length) {
    for (int currentsize = length; currentsize > 1; --currentsize) {
        // Find wheres the Biggest Number in the vector thing
        int Bignumberlocation = Bigone(unsorted, currentsize);
        // move the Biggest number to end of the vector if its not at the end
        if (Bignumberlocation != currentsize - 1) {
            //to move to the end first move biggest number to start
            Spatula(unsorted, Bignumberlocation);
            //now move the biggest number to the end by flipping the whole thing
            Spatula(unsorted, currentsize - 1);
        }
    }
    
}

// to print out the vectors at the end
void printthesort(vector<int> unsorted, int length) {
    for (int yourmomgay = 0; yourmomgay < length; yourmomgay++) {
        cout << unsorted[yourmomgay] << " ";
    }
}

// the main
int main() {
    int length;
    cin >> length;
    // the unsorted input
    vector<int> unsorted;
    unsorted.resize(length);
    for (int i = 0; i < length; i++) {
        // first set input as temp value and pushback the value to vector
        int temp;
        cin >> temp;
        unsorted.push_back(temp);
    }
    // Do the code
    Buchimgaesort(unsorted, length);
    // Print the result
    printthesort(unsorted, length);
    return 0;
}
