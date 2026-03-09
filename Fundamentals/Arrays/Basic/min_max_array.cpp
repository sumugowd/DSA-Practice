/*
Problem: Find Minimum and Maximum in an Array

Pattern:
Traversal / Linear Scan

Time Complexity: O(N)
Space Complexity: O(1)

Approach:
Traverse the array once while maintaining two variables:
one for minimum and one for maximum.
For each element, update min and max using std::min() and std::max().
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> getMinMax(vector<int> &arr, int n) {
    int mn=INT_MAX, mx=INT_MIN;
    for(int i=0;i<n;i++) {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    return {mn, mx};
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> ans = getMinMax(arr,n);
    cout << ans[0] << " " << ans[1];
    return 0;
}