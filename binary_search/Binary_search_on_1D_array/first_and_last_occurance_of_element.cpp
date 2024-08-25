#include<iostream>
#include<vector>
using namespace std;

int firstOccuranceInArray(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;
    while(low <= high){
        int middle = (low + high) / 2;
        if(arr[middle] >= key){
            ans = middle;
            high = middle - 1;
        }else{
            low = middle + 1;
        }
    }
    if(arr[ans] == key) return ans;
    else return -1;
}

int lastOccuranceInArray(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() - 1;
    int ans = -1;
    while(low <= high){
        int middle = (low + high) / 2;
        if(arr[middle] <= key){
            ans = middle;
            low = middle + 1;
        }else{
            high = middle - 1;
        }
    }
    if(arr[ans] == key) return ans;
    else return -1;
}

int main(){
    vector<int> arr = {2,4,6,8,8,8,11,13};
    cout<<firstOccuranceInArray(arr, 8);
    cout<<"\n"<<lastOccuranceInArray(arr, 9);
    return 0;
}