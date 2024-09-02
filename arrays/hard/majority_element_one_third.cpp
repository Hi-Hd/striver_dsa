#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;

vector<int> majority(vector<int> arr, int n){
    unordered_map<int, int> mpp;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    int needed = n / 3;
    for(auto it : mpp){
        if(it.second > needed){
            ans.emplace_back(it.first);
        }
    }
    return ans;
}

int majorityN2(vector<int> arr, int n){
    int el = -1;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(cnt == 0){
            el = arr[i];
            cnt = 1;
        }
        if(el == arr[i]) cnt++;
        else if(el != arr[i]) cnt--;
    }
    cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == el) cnt++;
    }
    if(cnt >= (n / 2)) return el;
    else return -1;
}

vector<int> majorityN3(vector<int> arr, int n){
    int el1 = 0;
    int el2 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(cnt1 == 0 && el2 != arr[i]){
            el1 = arr[i];
            cnt1 = 1;
        }else if(cnt2 == 0 && el1 != arr[i]){
            el2 = arr[i];
            cnt2 = 1;
        }else if(arr[i] == el1){
            cnt1++;
        }else if(arr[i] == el2){
            cnt2++;
        }else{
            cnt1--;
            cnt2--;
        }
    }
    ans.emplace_back(el1);
    ans.emplace_back(el2);
    return ans;
}

int main(){
    vector<int> arr = {1,1,1,2,2,3,3};
    cout<<majorityN2(arr, arr.size());

    return 0;
}