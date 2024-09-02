#include<vector>
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int countSubarrayEqualsK(vector<int> arr, int k){
    unordered_map<int, int> mpp;
    mpp[0]++;
    int count = 0;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        mpp[sum]++;
        int needed = sum - k;
        if(mpp.find(needed) != mpp.end()){
            count += mpp.at(needed);
        }
    }
    return count;
}


int main(){
    vector<int> arr = {1,2,3,-3,1,1,1,4,2,-3};
    cout<<countSubarrayEqualsK(arr, 3);

    return 0;
}