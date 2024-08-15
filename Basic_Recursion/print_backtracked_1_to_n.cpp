#include<iostream>
using namespace std;

 void printOneToN(int i, int n){
    if(i < 1) return;
    printOneToN(i-1, n);
    cout<<i<<"\n";
 }

int main(){
    printOneToN(5,5);

    return 0;
}