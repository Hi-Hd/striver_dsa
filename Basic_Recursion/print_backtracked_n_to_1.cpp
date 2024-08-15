#include<iostream>
using namespace std;

void printNToOne(int i, int n){
    if(i == n + 1) return;
    printNToOne(i+1, n);
    cout<<i<<"\n";
}

int main(){
    printNToOne(1,10);

    return 0;
}