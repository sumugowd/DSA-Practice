/*
Problem: Reverse an Array
Pattern: Two Pointer / STL

Time Complexity: O(N)
Space Complexity: O(1)

Approach:
Using C++ STL reverse() to reverse the array in-place.
*/
#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr) {
    reverse(arr.begin(),arr.end());
}
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    reverseArray(arr);

    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}