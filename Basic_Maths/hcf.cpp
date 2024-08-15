#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int num1 = 200;
    int num2 = 125;
    while(num1 != 0 && num2 != 0){
        if(num1 > num2) num1 = num1 % num2;
        if(num2 > num1) num2 = num2 % num1;
    }
    cout<<max(num1, num2);
    
    

    return 0;
}