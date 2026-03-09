/*
Problem: First and Last Occurrence in Sorted Array

Pattern:
Binary Search

Time Complexity: O(log N)
Space Complexity: O(1)

Approach:
Use Binary Search to locate the first and last occurrence of a target value
in a sorted array.

Run Binary Search twice:
1. First occurrence → when target is found, move left (high = mid - 1).
2. Last occurrence → when target is found, move right (low = mid + 1).

Store the index each time the target is found. The final stored values
represent the first and last positions of the target element.
*/
#include<bits/stdc++.h>
using namespace std;

int searchIndex(vector<int> &arr, int value, bool isFirst){
    int low=0, high=arr.size()-1, index=-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(arr[mid]==value){
            index = mid;
            if(isFirst) high = mid - 1;
            else low = mid + 1;
        }else if(arr[mid]>value){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return index;
}

vector<int> searchRange(vector<int> &arr, int value){
    int first = searchIndex(arr,value,true);
    if(first == -1) return {-1,-1};
    int last = searchIndex(arr,value,false);
    return {first, last};
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

    vector<int> ans = searchRange(arr,value);

    cout << ans[0] << " " << ans[1];
    
    return 0;
}