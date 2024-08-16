#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 0; i <= n - 1; i++){
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<"\t";
        }
        cout<<"\n";
    }
}

int main(){
    int arr[] = {10,5,2,3,6,5,78,12,3,6,9,456,14,23};
    insertionSort(arr, 14);

    return 0;
}