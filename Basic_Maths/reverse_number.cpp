#include<iostream>
using namespace std;
int main(){
    int digit = 1040;
    int reverseNumber = 0;
    int lastDigit = 0;
    while(digit){
        lastDigit = digit % 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        digit /= 10;
    }
    cout<<reverseNumber;

    return 0;
}