/*
Problem: Remove Duplicates from Sorted Array

Pattern:
Two Pointer Technique

Time Complexity: O(N)
Space Complexity: O(1)

Approach:
Since the array is sorted, duplicate elements appear next to each other.
Use two pointers:
- 'slow' keeps track of the position of the last unique element.
- 'fast' scans the array.

Whenever a new unique element is found, move the slow pointer forward
and place the new element there. This modifies the array in-place.
*/

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr) {
    int n = arr.size();
    if(n == 0) return 0;

    int slow = 0;

    for(int fast = 1; fast < n; fast++) {
        if(arr[fast] != arr[slow]) {
            slow++;
            arr[slow] = arr[fast];
        }
    }

    return slow + 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k = removeDuplicates(arr);

    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}