#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;

int maxSubarrayWithSum0(vector<int> arr){
    int arrayMax = 0;
    int sum = 0;
    unordered_map<int, int> mpp;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        //check in map
        if(mpp.find(sum) != mpp.end()){
            int index = mpp.at(sum);
            arrayMax = max(arrayMax, i - index);
        }else{
            mpp[sum] = i;
        }
    }
    return arrayMax;
}

int main(){
    vector<int> arr = {1,-1,3,2,-2,-8,1,7,10,23};
    cout<<maxSubarrayWithSum0(arr);

    return 0;
}