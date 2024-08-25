#include<iostream>
#include<vector>
using namespace std;

int insertPosition(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() - 1;
    int ans = 0;
    while (low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] >= key){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
    
}

int main(){
    vector<int> arr = {1,3,5,6,7,8,11,12,14,15,19,25,28};
    cout<<insertPosition(arr, 9);

    return 0;
}