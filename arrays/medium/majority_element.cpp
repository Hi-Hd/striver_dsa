#include<iostream>
#include<vector>
#include<map>
using namespace std;

int majorityElement(vector<int> arr){
    unordered_map<int, int> mpp;
    int n = arr.size();
    int majority = n / 2;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
        if(mpp.at(arr[i]) > majority){
            return arr[i];
        }
    }
    return -1;
}

int mooresVotingAlgorithm(vector<int> arr){
    int element = -1;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(count == 0) element = arr[i];
        if(arr[i] == element){
            count++;
        }else{
            count--;
        }
    }
    return element;
}

int main(){
    vector<int> arr = {2,2,2,2,2,2,2,4,5,6};
    int ans = mooresVotingAlgorithm(arr);
    cout<<ans;

    return 0;
}