/*
Problem: Binary Search

Pattern:
Binary Search (Divide and Conquer)

Time Complexity: O(log N)
Space Complexity:
Iterative → O(1)
Recursive → O(log N) (due to recursion stack)

Approach:
Binary Search works on a sorted array.
At each step, compare the target with the middle element.

If the middle element equals the target → return its index.
If the middle element is greater than the target → search in the left half.
If the middle element is smaller than the target → search in the right half.

Repeat until the target is found or the search space becomes empty.
*/
#include<bits/stdc++.h>
using namespace std;

int BinarySearchRecursive(int low, int high, vector<int> &arr, int target) {
    if(low>high) return -1;
    int mid= (low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) return BinarySearchRecursive(low,mid-1,arr,target);
    else return BinarySearchRecursive(mid+1,high,arr,target);
}

int BinarySearchIterative(vector<int> &arr, int target){
    int low = 0, high = arr.size()-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
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

    //cout << BinarySearchIterative(arr,target);
    cout << BinarySearchRecursive(0,n-1,arr,target);

    return 0;
}