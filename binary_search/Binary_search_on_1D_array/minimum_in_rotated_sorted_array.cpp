#include<iostream>
#include<vector>
using namespace std;

int minimumInRotatedSortedArray(vector<int> arr){
    int low = 0;
    int high = arr.size() - 1;
    int lowest = INT_MAX;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == arr[low] && arr[mid] ==arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[low] <= arr[high]){
            return min(lowest, arr[low]);
        }
        if(arr[low] <= arr[mid]){
            //left is sorted
            lowest = min(arr[low], lowest);
            //now look towards the right
            low = mid + 1;

        }else{
            lowest = min(arr[mid], lowest);
            high = mid - 1;
        }
    }
    return lowest;
}

int main(){
    vector<int> arr = {7,8,1,2,3,4,5,6};
    cout<<minimumInRotatedSortedArray(arr);


    return 0;
}