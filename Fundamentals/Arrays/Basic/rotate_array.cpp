/*
Problem: Rotate Array by D Positions

Pattern:
Array Reversal Technique

Time Complexity: O(N)
Space Complexity: O(1)

Approach:
Rotate the array using the reversal algorithm.
1. Reverse the first D elements.
2. Reverse the remaining N-D elements.
3. Reverse the entire array.

This performs the rotation in-place without using extra space.
*/
#include<bits/stdc++.h>
using namespace std;
void rotateArr(vector<int> &arr, int d) {
    d=d%arr.size();
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;

    rotateArr(arr,d);

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}