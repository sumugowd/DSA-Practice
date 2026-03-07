#include<bits/stdc++.h>
using namespace std;
void rotateArr(vector<int> &arr, int d) {
    d=d%arr.size();
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;

    rotateArr(arr,d);

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}