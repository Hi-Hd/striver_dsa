#include<iostream>
using namespace std;

int cnt = 1;

void printOneToN(int n){
    if(cnt == n + 1){
        return;
    }
    cout<<cnt++<<"\n";
    printOneToN(n);
}

int main(){
    printOneToN(20);

    return 0;
}