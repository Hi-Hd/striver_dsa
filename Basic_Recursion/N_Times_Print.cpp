#include<iostream>
using namespace std;

int cnt = 0;

void nTimes(int n){
    if(cnt == n){
        return;
    }
    
    cout<<cnt++<<"\n";
    nTimes(n);
}

int main(){
    nTimes(10);

    return 0;
}