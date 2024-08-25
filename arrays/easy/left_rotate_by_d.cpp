#include<iostream>
using namespace std;

void leftRotateByDBrute(int arr[], int n, int d){
    d = d%n;
    int temp[d];

    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }

    for(int i = d % 7; i < n; i++){
        arr[i-d] = arr[i];
    }
    for(int j = n - d; j < n; j++){
        arr[j] = temp[j-(n-d)];
    }
    
}

void leftRotateByDOptimal(int arr[], int n, int d){
    d = d % n;
    reverse(arr, arr+d);//takes address
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    leftRotateByDOptimal(arr, 7, 8);
    for(int i = 0; i < 7; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"buddy";


    return 0;
}