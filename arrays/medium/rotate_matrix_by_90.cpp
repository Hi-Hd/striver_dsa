#include<iostream>
#include<vector>
using namespace std;

void ReverseArray(vector<int> &arr){
    int i = 0;
    int j = arr.size() - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void TransposeMatrix(vector<vector<int>> &arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j <= i; j++){
            if(i == j) continue;
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

vector<vector<int>> rotateMatrix(vector<vector<int>> arr){
    vector<vector<int>> ans;
    TransposeMatrix(arr);
    for(int i = 0; i < arr.size(); i++){
        ReverseArray(arr[i]);
    }
    ans = arr;
    return ans;
}



int main(){
    vector<vector<int>> arr = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<vector<int>> ans = rotateMatrix(arr);
    TransposeMatrix(arr);
    for(auto it: ans){
        for(auto zt: it){
            cout<<zt<<"\t";
        }cout<<"\n";
    }

    return 0;
}