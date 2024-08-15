#include<iostream>
#include<string>
using namespace std;

bool palindrome(int i, string arr, int n){

    if(i >= n/2) return true;
    if(arr[i] != arr[n-i-1]) return false;
    return palindrome(i+1, arr, n);
}

int main(){
    string s = "123454321";
    cout<<palindrome(0,s,s.size());

    return 0;
}