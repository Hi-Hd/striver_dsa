#include<iostream>
using namespace std;

int returnSingularElement(int arr[], int n){
    int xorredList = 0;
    for(int i = 0; i < n; i++){
        xorredList = xorredList ^ arr[i];
    }
    return xorredList;
}

int main(){
    int arr[] = {1,1,2,2,3,4,4};
    cout<<returnSingularElement(arr, 7);

    return 0;
}