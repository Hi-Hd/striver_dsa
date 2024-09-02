#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int buyAndSellStock(vector<int> arr){
    int min = arr[0];
    int n = arr.size();
    int profit = INT_MIN;
    for(int i = 1; i < n; i++){
        if(arr[i] < min) min = arr[i];
        if(arr[i] - min > profit){
            profit = arr[i] - min;
        }
    }
    return profit;
}

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    int ans = buyAndSellStock(arr);
    cout<<ans;

    return 0;
}