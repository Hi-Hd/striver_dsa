#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age > 57){
        cout<<"retire you fucking gramps!\n";
    }else if(age >= 18){
        if(age >= 55){
            cout<< "retirement soon\n";
        }
        cout<<"eligible for job\n";
    }else if(age <18){
        cout<<"not eligible for job!\n";
    }


    return 0;
}