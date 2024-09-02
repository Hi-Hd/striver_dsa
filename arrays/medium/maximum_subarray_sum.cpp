#include<iostream>
#include<vector>
using namespace std;

vector<int> kadanesAlgo(vector<int> arr){
    vector<int> ans;
    int max = arr[0];
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum > max) max = sum;
        if(sum < 0){
            ans.erase(ans.begin(), ans.end());
            sum = 0;
        }else{
            ans.emplace_back(arr[i]);
        }
    }
    return ans;
}

int kadaneAlgoIntReturn(vector<int> arr){
    int max = INT_MIN;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if(sum > max) max = sum;
        if(sum < 0){
            sum = 0;
        }
        cout<<sum<<"\t"<<max<<"\n";
    }
    return max;
}

int main(){
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    int ans = kadaneAlgoIntReturn(arr);
    cout<<ans;

    return 0;
}