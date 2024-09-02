#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayWithOneTwoZero(vector<int> arr){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0) cnt0++;
        if(arr[i] == 1) cnt1++;
        if(arr[i] == 2) cnt2++;
    }
    for(int i = 0; i < arr.size(); i++){
        cout<<cnt0<<"\t"<<cnt1<<"\t"<<cnt2<<"\n";
        if(cnt0 > 0){
            arr[i] = 0;
            cnt0--;
            continue;
        }else if(cnt1 > 0){
            arr[i] = 1;
            cnt1--;
            continue;
        }else if(cnt2 > 0){
            arr[i] = 2;
            cnt2--;
        }

    }
    return arr;
}

vector<int> sortArrayWithOneTwoZeroOptimal(vector<int> arr){
    int low = 0;
    int mid = low;
    int high = arr.size() - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else if(arr[mid] == 2){
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {0,1,2,0,1,2,1,2,0,0,0,1};
    arr = sortArrayWithOneTwoZeroOptimal(arr);
    for(auto it : arr){
        cout<<it<<"\t";
    }

    return 0;
}