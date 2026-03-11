/*
Problem: Find Insert Position in Sorted Array

Pattern:
Binary Search

Time Complexity: O(log N)
Space Complexity: O(1)

Approach:
Use Binary Search to determine the position where the value
should be inserted in a sorted array.

Traverse the array using low and high pointers:
- If arr[mid] <= value, move to the right half and update the position.
- Otherwise, search in the left half.

The final stored position represents the correct index where
the value can be inserted while maintaining the sorted order.
*/
#include<bits/stdc++.h>
using namespace std;

int search_position(vector<int> &arr, int value){
    int low = 0, high = arr.size() -1;
    int pos = 0;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] <= value){
            pos = mid + 1;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return pos;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int value;
    cin >> value;

    cout << search_position(arr,value);

    // auto it = upper_bound(arr.begin(), arr.end(), value);
    // cout << it - arr.begin();

    return 0;
}