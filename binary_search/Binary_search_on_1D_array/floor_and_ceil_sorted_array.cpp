#include<iostream>
#include<vector>
using namespace std;

int floorArray(vector<int> arr, int key){
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
    return ans;
}

int cielArray(vector<int> arr, int key){
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
    return ans;
}

int main(){
    vector<int> arr = {10,20,30,40,50};
    cout<<floorArray(arr, 5);
    cout<<"\n"<<cielArray(arr, 60);


    return 0;
}