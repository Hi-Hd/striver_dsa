#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;

vector<vector<int>> threeSum(vector<int> arr){
    set<vector<int>> st;
    vector<vector<int>> ans;
    for(int i = 0; i < arr.size(); i++){
        unordered_map<int, int> mpp;
        for(int j = i + 1; j < arr.size(); j++){
            if(mpp.find(-(arr[i] + arr[j])) != mpp.end()){
                vector<int> temp;
                temp.emplace_back(arr[i]);
                temp.emplace_back(arr[j]);
                temp.emplace_back((*mpp.find(-(arr[i] + arr[j]))).first);
                sort(temp.begin(), temp.end());
                if(st.find(temp) == st.end()){
                    ans.emplace_back(temp);
                    st.emplace(temp);
                }
            }
            mpp[arr[j]]++;
        }
    }
    return ans;
}

vector<vector<int>> threeSumOptimal(vector<int> arr){
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        if(i > 0 && arr[i] == arr[i - 1]) continue;
        int j = i + 1;
        int k = arr.size() - 1;
        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < 0){
                int jth = arr[j];
                while(j < k && arr[j] == jth) j++;
            }else if(sum > 0){
                int kth = arr[k];
                while(j < k && arr[k] == kth) k--;
            }else{
                //sum == 0
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.emplace_back(temp);
                int jth = arr[j];
                int kth = arr[k];
                while(j < k && jth == arr[j]) j++;
                while(j < k && arr[k] == kth) k--;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    vector<vector<int>> ans = threeSumOptimal(arr);
    for(auto it: ans){
        for(auto zt : it){
            cout<<zt<<"\t";
        }cout<<"\n";
    }

    return 0;
}