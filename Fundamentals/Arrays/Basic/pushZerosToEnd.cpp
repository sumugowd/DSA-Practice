/*
Problem: Move Zeroes to End

Pattern:
Two Pointer Technique

Time Complexity: O(N)
Space Complexity: O(1)

Approach:
Use two pointers to rearrange the array in-place.
The 'first' pointer tracks the position where the next non-zero element should go.
Traverse the array with 'second' pointer.
Whenever a non-zero element is found, swap it with the element at 'first'
and increment 'first'. This keeps all non-zero elements at the front
while pushing zeroes to the end.
*/
#include<bits/stdc++.h>
using namespace std;
void pushZerosToEnd(vector<int> &arr) {
    int n = arr.size();
    if (n == 0) return;

    int first = 0;

    for (int second = 0; second < n; ++second) {
        if (arr[second] != 0) {
            swap(arr[first], arr[second]);
            first++;
        }   
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    pushZerosToEnd(arr);

    for( int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}