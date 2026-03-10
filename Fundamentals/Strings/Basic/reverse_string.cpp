/*
Problem: Reverse a String

Pattern:
Recursion / Two Pointer Technique

Time Complexity: O(N)
Space Complexity: O(N) (due to recursion call stack)

Approach:
Use two pointers: one at the beginning (left) and one at the end (right).
Swap the characters at these positions.

Then recursively call the function by moving:
left → left + 1
right → right - 1

Continue until the pointers meet or cross.
*/
#include<bits/stdc++.h>
using namespace std;

void reverse_string(int left, int right, string &s){
    if(left >= right) return;
    swap(s[left],s[right]);
    reverse_string(left+1,right-1,s);
}

int main() {
    string s;
    getline(cin,s);

    reverse_string(0,s.length()-1,s);

    cout << s;

    return 0;
}