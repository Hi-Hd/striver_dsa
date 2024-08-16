#include<iostream>
using namespace std;

int secondLargestElementBetter(int arr[], int n){
    int largest = 0;
    for(int i = 0; i < n; i++){
        if(arr[largest] < arr[i]) largest = i;
    }
    //in second pass keep a difference and index for second largest
    int secondLargest = 0;
    int difference = arr[largest] - arr[0];
    for(int i = 0; i < n; i++){
        if(difference > (arr[largest] - arr[i]) && difference != 0){
            secondLargest = i;
        }
    }
    return arr[secondLargest];
}

int secondLargestElementOptimal(int arr[], int n){
    int largest = arr[0];
    int secondLargest = -1;
    for(int i = 1; i < n; i++){
        if(largest < arr[i]){
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
        cout<<largest<<"\t"<<secondLargest<<"\n";
    }
    return secondLargest;
}

int main(){
    int arr[] = {1,2,4,7,7,5};
    cout<<secondLargestElementOptimal(arr, 6);
    return 0;
}