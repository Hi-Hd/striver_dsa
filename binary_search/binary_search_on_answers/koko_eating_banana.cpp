#include<iostream>
#include<vector>
using namespace std;

int biggestElementInArray(vector<int> arr){
    int ans = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > ans) ans = arr[i];
    }
    return ans;
}

int calculateNumberOfHoursTaken(vector<int> arr, int mid){
    int time = 0;
    for(int i = 0; i < arr.size(); i++){
        time += ceil(arr[i] / double(mid));
    }
    return time;
}

int kokoEatingBanana(vector<int> arr, int h){
    int low = 1;
    int high = biggestElementInArray(arr);
    int answer = 0;
    while(low <= high){
        int mid = (low + high) / 2;
        int time = calculateNumberOfHoursTaken(arr, mid);
        if(time <= h){
            answer = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
        cout<<mid<<"\n";
    }
    return answer;
}

int main(){
    vector<int> arr = {3,6,7,11};
    cout<<kokoEatingBanana(arr, 8);


    return 0;
}