#include<iostream>
#include<vector>
using namespace std;

void moveZeroToLastBrute(int arr[], int n){
    vector<int> temp;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0) temp.emplace_back(arr[i]);
    }
    int size = temp.size();
    for(int i = 0; i < size; i++){
        arr[i] = temp[i];
    }
    for(int i = size; i < n; i++){
        arr[i] = 0;
    }
}

void moveZeroToLastOptimal(int arr[], int n){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) return;
    cout<<j<<"\n";
    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
            cout<<"swapped ";
        }
    }
    cout<<"\n";
}

int main(){
    int arr[] = {1,0,2,3,2,0,0,4,5,1};
    moveZeroToLastOptimal(arr, 10);
    for(int i = 0; i < 10; i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}