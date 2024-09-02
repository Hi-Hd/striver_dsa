#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<int>> fourSum(vector<int> arr, int target){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i = 0; i < arr.size(); i++){
        if(i > 0 && arr[i] == arr[i - 1]) continue;
        for(int j = i + 1; j < arr.size(); j++){
            if(j != i + 1 && arr[j] == arr[j - 1]) continue;
            int k = j + 1;
            int l = arr.size() - 1;
            while(k < l){
                long long sum = arr[i] + arr[j] + arr[k] + arr[l];
                if(sum > target){
                    l--;
                    while(k < l && arr[l] == arr[l-1])l--;
                }else if(sum < target){
                    k++;
                    while(k < l && arr[k] == arr[k-1])k++;
                }else{
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.emplace_back(temp);
                    k++; l--;
                    while(k < l && arr[k] == arr[k-1])k++;
                    while(k < l && arr[l] == arr[l+1])l--;
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,0,-1,0,-2,2};
    vector<vector<int>> ans = fourSum(arr, 0);
    for(auto it: ans){
        for(auto zt: it){
            cout<<zt<<"\t";
        }cout<<"\n";
    }
    return 0;
}