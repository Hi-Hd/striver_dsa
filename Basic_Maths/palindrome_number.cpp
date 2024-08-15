#include<iostream>
using namespace std;
int main(){
    int num = 12321;
    int comparison_Number = num;
    int rev = 0;
    int temp = 0;
    while(num){
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }
    if(rev == comparison_Number){
        cout<<"palindrome";
    }else{
        cout<<"NAh i'd win!";
    }

    return 0;
}