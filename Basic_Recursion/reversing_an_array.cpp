#include<iostream>    
#include<array> 
using namespace std;

void swap(int i, int arr[], int n){
    if(i >= n/2) return;
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
    swap(i+1, arr, n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<"\n";
    swap(0, arr, n);
    for(int i = 0; i < n; i++) cout<<arr[i]<<"\n";
}
