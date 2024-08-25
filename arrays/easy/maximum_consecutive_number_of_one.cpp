#include<iostream>
#include<vector>
using namespace std;

int maxConsecutiveOne(int arr[], int n){
    int i = 0;
    int maxOne = 0;
    int totalMax = 0;
    for(int j = 0; j < n; j++){
        if(arr[j] != 1){
            if(maxOne > totalMax) totalMax = maxOne;
            i = j;
            maxOne = 0;
            continue;
        }
        maxOne++;
    }
    return totalMax;
}

int main(){
    int arr[] = {1,1,0,1,1,1,1,0,1,1,1};
    cout<<maxConsecutiveOne(arr, 11);

    return 0;
}