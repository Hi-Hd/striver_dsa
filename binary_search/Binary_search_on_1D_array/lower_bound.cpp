#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() - 1;
    int ans = 0;
    while(low <= high){
        int middle = (low + high) / 2;
        if(arr[middle] >= key){
            ans = middle;
            high = middle - 1;
        }else{
            low = middle + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,3,5,6,7,8,11,12,14,15,19,25,28};
    cout<<lowerBound(arr, 12);

    return 0;
}