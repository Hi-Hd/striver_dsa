#include<iostream>
using namespace std;

int nthRootOfMIntergerBrute(int n, int m){
    int ans = -1;
    for(int i = 0; i < m; i++){
        int mul = 1;
        for(int j = 0; j < n; j++) mul *= i;
        if(mul <= m) ans = i;
        else break;
    }
    if(pow(ans,n) == m) return ans;
    else return -1;
}


int nthRootOfMIntergerOptimal(int n, int m){
    int low = 1;
    int high = m;
    while(low <= high){
        int mid = (low + high) / 2;
        int mul = pow(mid, n);
        if(mul == m) return mid;
        else if(mul <= m) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}


int main(){
    cout<<nthRootOfMIntergerOptimal(3,27);


    return 0;
}