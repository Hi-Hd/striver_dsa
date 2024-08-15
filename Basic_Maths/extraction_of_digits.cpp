#include<iostream>
using namespace std;
int main(){
    cout<<"enter the digit:";
    int digit;
    cin>>digit;
    int passes = to_string(digit).length();
    for(int i = 0; i < passes; i++){
        cout<<"digit "<<i + 1<<": "<<digit % 10<<"\n";
        digit /= 10;
    }
    return 0;
}