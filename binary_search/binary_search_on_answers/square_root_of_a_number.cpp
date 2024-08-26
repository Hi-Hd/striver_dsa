#include<iostream>
#include<vector>
using namespace std;

int squareRoot(int n){
    int low = 1;
    int high = n;
    int ans = 0;
    while(low <= high){
        int mid = (low + high) / 2;
        if(mid * mid <= n){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n = 36;
    cout<<squareRoot(n);

    return 0;
}