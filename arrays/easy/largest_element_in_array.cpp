#include<iostream>
using namespace std;

int maxValueOptimal(int arr[], int n){
    int max = 0;
    for(int i = 0; i < n; i++){
        if(arr[max] < arr[i]){
            max = i;
        }
    }
    return arr[max];
}

int main(){
    int arr[] = {3,2,1,5,2};
    cout<<maxValueOptimal(arr, 5);

    return 0;
}