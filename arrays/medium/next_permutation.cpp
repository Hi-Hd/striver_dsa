#include<iostream>
#include<vector>
using namespace std;



void nextPermutation(vector<int>& arr) {
    int index = -1;
    int n = arr.size();
    for(int i = n - 2; i >= 0; i--){
        if(arr[i + 1] > arr[i]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(), arr.end());
        return;
    }
    //now find least from i to n-1
    for(int k = n - 1; k > index; k--){
        if(arr[k] > arr[index]){
            swap(arr[k], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index + 1, arr.end());
    return;
}

int main(){
    vector<int> arr = {3,2,1};
    nextPermutation(arr);
    for(auto it: arr){
        cout<<it<<"\t";
    }

    return 0;
}