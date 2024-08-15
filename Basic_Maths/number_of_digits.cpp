#include<iostream>
using namespace std;
int main(){
    cout<<"enter the digit:";
    int digit;
    cin>>digit;
    cout<<"number of digits in "<<digit<<" is:"<<int(log10(digit) + 1); //optimized with O(log10(n))

    return 0;
}