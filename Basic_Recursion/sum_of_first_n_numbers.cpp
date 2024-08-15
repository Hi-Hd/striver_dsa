#include<iostream>
using namespace std;

void summation(int i, int sum){
    if(i < 1){
        cout<<sum;
        return;
    }
    summation(i - 1, sum + i);
}

int summationFunctional(int n){
    if(n == 1) return 1;
    
    return n + summationFunctional(n-1);
}

int main(){
    summation(10,0);
    cout<<"\n\n\n"<<summationFunctional(10);
    return 0;
}