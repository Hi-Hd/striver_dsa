#include<iostream>
#include<vector>
using namespace std;

int searchInRotatedNonDuplicate(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int middle = (low + high) / 2;
        if(arr[middle] == key) return middle;
        //checking if left is sorted
        if(arr[low] <= arr[middle]){
            if(arr[low] <= key && key <= arr[middle]){
                high = middle - 1;
            }else{
                low = middle + 1;
            }
        }
        //if right side is sorted
        else{
            if(arr[high] >= key && arr[middle] <= key){
                low = middle + 1;
            }else{
                high = middle - 1;
            }
        }
        cout<<middle<<"\n";
    }
    return -1;
}

int main(){
    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    cout<<searchInRotatedNonDuplicate(arr, 9);


    return 0;
}