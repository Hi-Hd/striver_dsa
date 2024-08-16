#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    int arr[] = {12,21,3,13,3,235,12};
    selectionSort(arr, 7);
    return 0;
}