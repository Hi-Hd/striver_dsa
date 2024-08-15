#include<iostream>
using namespace std;


void printNToOne(int n){
    if(n == 0){
        return;
    }
    cout<<n<<"\n";
    printNToOne(n-1);
}

int main(){
    printNToOne(20);

    return 0;
}