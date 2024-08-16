#include<iostream>
using namespace std;

void leftRotateByOne(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main(){
    int arr[] = {1,2,3,4,5};
    leftRotateByOne(arr, 5);
    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}