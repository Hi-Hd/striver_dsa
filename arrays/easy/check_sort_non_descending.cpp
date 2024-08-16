#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int main(){
    int arr[] = {3,4,5,1,2};
    cout<<checkSorted(arr, 5);

    return 0;
}