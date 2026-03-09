
#include<bits/stdc++.h>
using namespace std;

void prefixsum(vector<int> &arr){
    for(int i = 1; i<arr.size(); i++){
        arr[i]+=arr[i-1];
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    prefixsum(arr);

    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }

    return 0;
}