#include <iostream>
#include <vector>
#include <algorithm> // Zaroori: reverse() function ke liye

using namespace std;

int main() {
    vector<int> arr = {-4, -2, 0, 1, 3};
    int size = arr.size();
    
    vector<int> neg;
    vector<int> pos;

    // 1. Separate negative and positive numbers
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            neg.push_back(arr[i]);
        }
        else {
            pos.push_back(arr[i]);
        }
    }

    // 2. Square both (Aapka logic bilkul sahi hai)
    for(int i = 0; i < neg.size(); i++) {
        neg[i] = neg[i] * neg[i];
    }

    for(int i = 0; i < pos.size(); i++) {
        pos[i] = pos[i] * pos[i];
    }

    // 3. Reverse neg (Important step: -4,-2 square hoke 16,4 bante hain, reverse karke ye 4,16 ho jayenge)
    reverse(neg.begin(), neg.end());

    // 4. Merge (Merge sort wala logic)
    vector<int> result;
    int i = 0, j = 0;

    while(i < neg.size() && j < pos.size()) {
        if(neg[i] < pos[j]) {
            result.push_back(neg[i]);
            i++;
        }
        else {
            result.push_back(pos[j]);
            j++;
        }
    }

    // Remaining elements ko add karna
    while(i < neg.size()) {
        result.push_back(neg[i]);
        i++;
    }

    while(j < pos.size()) {
        result.push_back(pos[j]);
        j++;
    }

    // 5. Result print karna
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}