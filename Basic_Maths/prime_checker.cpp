#include<iostream>
#include<cmath>
using namespace std;

void primeChecker(int n){
    for(int i = 2; i <= int(pow(n, 0.5)); i++){
        if(n % i == 0){
            cout<<"not prime!";
            return;
        }
    }
    cout<<"prime!";
}

int main(){
    int n = 0;
    cin>>n;
    primeChecker(n);

    return 0;
}