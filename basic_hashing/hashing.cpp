#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1,3,2,1,3,6,7,5,7,5};
    int hash[7] = {0};
    for(int i = 0; i < 10; i++){
        hash[arr[i]]++; 
    }
    cout<<hash[5]<<"\n";
    cout<<hash[1]<<"\n";
    cout<<hash[4]<<"\n";
    cout<<hash[2]<<"\n";
    cout<<hash[3]<<"\n";



    return 0;
}