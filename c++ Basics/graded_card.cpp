#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter your marks:";
    cin >> marks;
    if(marks >= 80){
        cout<<"Your grades are A";
    }else if(marks >= 60){
        cout<<"Your grades are B";
    }else if(marks >= 50){
        cout<<"Your grades are C";
    }else if(marks >= 45){
        cout<<"Your grades are D";
    }else if(marks >= 25){
        cout<<"Your grades are E";
    }else if(marks >= 0){
        cout<<"Your grades are F";
    }


    return 0;
}