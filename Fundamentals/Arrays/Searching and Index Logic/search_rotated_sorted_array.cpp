/*
Problem: Search in Rotated Sorted Array

Pattern:
Modified Binary Search

Time Complexity: O(log N)
Space Complexity: O(1)

Approach:
The array is sorted but rotated at some pivot.
Use Binary Search to determine which half is sorted.

If the left half is sorted:
    check if target lies in that range.
Otherwise:
    search in the right half.
*/

#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int target){
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
            return mid;

        // Left half sorted
        if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        
        // Right half sorted
        else{
            if(arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    cout << search(arr, target);

    return 0;
}