#include<iostream>
using namespace std;

int factiorial(int n){
    if(n == 0) return 1;
    return n * factiorial(n-1);
}

int main(){
    cout<<factiorial(10);

}