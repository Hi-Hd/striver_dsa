#include<iostream>
using namespace std;

int cnt = 0;

void printName(string name){
    if(cnt == 5){
        return;
    }
    cout<<name<<"\n";
    cnt++;
    printName(name);
}

int main(){
    printName("harshit");

    return 0;
}