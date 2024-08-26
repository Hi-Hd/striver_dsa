#include<iostream>
#include<vector>
using namespace std;

int maxElementArray(vector<int> arr){
    int max = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int arrayDisivorSummation(vector<int> arr, int mid, int threshold){
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans += ceil((double)arr[i]/(double)mid);
    }
    return ans;
}

int divisiorWithThreshold(vector<int> arr, int threshold){
    int low = 1;
    int high = maxElementArray(arr);
    int ans = -1;
    if(threshold < arr.size()) return -1;
    while(low <= high){
        int mid = (low + high) / 2;
        int divisorSum = arrayDisivorSummation(arr, mid, threshold);
        if(divisorSum <= threshold){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,5,9};
    cout<<divisiorWithThreshold(arr,7);

}