#include<iostream>
#include<vector>
using namespace std;

int maxInArray(vector<int> arr){
    int maximum = 0;
    for(int i = 0; i < arr.size(); i++){
        if(maximum < arr[i]) maximum = arr[i];
    }
    return maximum;
}

int numberOfBouquets(vector<int> arr, int day, int k){
    int bloomed = INT_MIN;
    int numberOfBouquet = 0;
    int cnt = 0;
    for(int j = 0; j < arr.size(); j++){
        if(arr[j] <= day){
            cnt++;
        }else{
            cnt = 0;
        }
        if(cnt == k){ 
            numberOfBouquet++;
            cnt = 0;
        }
    }
    return numberOfBouquet;
}

int minimumDaysToMakeMBouquets(vector<int> arr, int m, int k){
    int low = 1;
    int high = maxInArray(arr);
    int ans = 0;
    if(k > arr.size()) return -1;
    while(low <= high){
        int mid = (low + high) / 2;
        int bouquets = numberOfBouquets(arr, mid, k);
        if(bouquets >= m){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {7,7,7,7,13,11,12,7};
    cout<<minimumDaysToMakeMBouquets(arr, 2, 3);

    return 0;
}