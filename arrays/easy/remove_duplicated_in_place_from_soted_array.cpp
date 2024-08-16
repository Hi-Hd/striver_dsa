#include<iostream>
using namespace std;

int returnUnique(int arr[], int n){
    int i = 0;
    int j = 1;
    for(j; j < n; j++){
        if(arr[j] != arr[i]){
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main(){
    int arr[] = {1,1,2,2,2,3,3,4,4,4,5,6};
    cout<<returnUnique(arr, 12);

    return 0;
}