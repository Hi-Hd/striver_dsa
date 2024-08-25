#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int middle = (low + high) / 2;
        if(arr[middle] == key){
            return middle;
        }else if(arr[middle] < key){
            low = middle + 1;
        }else{
            high = middle - 1;
        }
    }
    return -1;

}

int main(){
    vector<int> arr = {1,3,5,6,7,8,11,12,14,15,19,25,28};
    cout<<binarySearch(arr, 25);

    return 0;
}