/*
Problem: Linear Search

Pattern:
Array Traversal

Time Complexity: O(N)
Space Complexity: O(1)

Approach:
Traverse the array from the first element to the last element.
Compare each element with the target value.
If the target is found, return its index.
If the traversal completes without finding the target,
return -1 indicating the element does not exist in the array.
*/
#include<bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int> &arr, int target){
    int n=arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int ans = LinearSearch(arr, target);

    cout << ans;

    return 0;
}