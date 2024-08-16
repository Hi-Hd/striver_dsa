#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int didSwap = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j + 1] < arr[j]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didSwap = 1;
            }
        }
        for(int i = 0; i < n; i++){
            cout<<arr[i]<<"\t";
        }
        cout<<"\n";
        if(didSwap == 0) return;
    }
}

int main(){
    int arr[] = {4,1,6,8,9,4};
    bubbleSort(arr, 6);
    
    return 0;
}