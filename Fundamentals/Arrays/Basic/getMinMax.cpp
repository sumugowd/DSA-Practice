#include<bits/stdc++.h>
using namespace std;
vector<int> getMinMax(vector<int> &arr, int n);
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

vector<int> getMinMax(vector<int> &arr, int n) {
    int mn=INT_MAX, mx=INT_MIN;
    for(int i=0;i<n;i++) {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
    return {mn, mx};
}