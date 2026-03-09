/*
Problem: Check if Array is Sorted

Pattern:
Array Traversal

Time Complexity: O(N)
Space Complexity: O(1)

Approach:
Traverse the array and compare each element with the next one.
If any element is greater than the next element, the array is not sorted.
If the entire array is traversed without finding such a case, the array is sorted.
*/
#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &arr) {
    int n=arr.size();
    for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << boolalpha << isSorted(arr);
    return 0;
}