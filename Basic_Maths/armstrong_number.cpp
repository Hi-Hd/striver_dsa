#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num = 371;
    int numCheck = num;
    int lastDigit = 0;
    int armstrong = 0;
    while(num){
        lastDigit = num % 10;
        armstrong += pow(lastDigit, 3);
        num /= 10;
    }
    if(armstrong == numCheck){
        cout<<"ARMSTRONG: I MADE IT THE FUCK UP!";
    }else{
        cout<<"RYDEN:TURN OFF MY CRINGE INHIBITORS DOK!!!";
    }


    return 0;
}