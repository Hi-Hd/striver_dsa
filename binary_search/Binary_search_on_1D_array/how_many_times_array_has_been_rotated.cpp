#include<iostream>
#include<vector>
using namespace std;

int numberOfRotationInSortedArray(vector<int> arr){
    int low = 0;
    int high = arr.size() - 1;
    int lowest = INT_MAX;
    int lowestIndex = INT_MAX;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[low] <= arr[mid]){
            //left is sorted
            if(arr[low] < lowest){
                lowest = arr[low];
                lowestIndex = low;
            }
            low = mid + 1;
        }else{
            //right is sorted
            if(arr[mid] < lowest){
                lowest = arr[mid];
                lowestIndex = mid;
            }
            high = mid - 1;
        }
    }
    cout<<lowest<<"\n";
    return lowestIndex;
}

int main(){
    vector<int> arr = {6,7,8,1,2,3,4,5};
    cout<<numberOfRotationInSortedArray(arr);


    return 0;
}