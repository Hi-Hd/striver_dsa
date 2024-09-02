#include<iostream>
#include<map>
#include<vector>
using namespace std;

bool twoSum(vector<int> arr, int target){
    map<int, int> mp;
    mp[0] = 1;
    for(int i = 0; i < arr.size(); i++){
        mp[arr[i]]++;
        if(mp[target - arr[i]]){
            return true;
        }
        for(auto it : mp){
            cout<<it.first<<"\t"<<it.second<<"\n";
        }
    }
    
    return false;
}

vector<int> twoSumSecondVarient(vector<int> arr, int target){
    vector<int> ans;
    sort(arr.begin(), arr.end());
    int i = 0;
    int j = arr.size() - 1;
    while( i < j){
        if(arr[i] + arr[j] == target){
            ans.emplace_back(min(i,j));
            ans.emplace_back(max(i,j));
            break;
        }else if(arr[i] + arr[j] < target){
            i++;
        }else{
            j--;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,7,11,15};
    vector<int> ans = twoSumSecondVarient(arr, 9);
    for(auto it : ans){
        cout<<it<<"\n";
    }
    return 0;
}