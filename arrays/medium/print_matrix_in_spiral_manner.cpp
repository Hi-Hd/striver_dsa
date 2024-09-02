#include<vector>
#include<iostream>
using namespace std;

void printSprialMatrix(vector<vector<int>> arr){
    int n = arr.size();
    int m = arr[0].size();
    int left = 0;
    int right = m;
    int bottom = n;
    int top = 0;
    while(left < right && top < bottom){
        for(int i = left; i < right; i++){
            cout<<arr[top][i]<<"\t";
        }
        top++;

        for(int i = top; i < bottom; i++){
            cout<<arr[i][right - 1]<<"\t";
        }
        right--;

        if(left > right || top > bottom){
            break;
        } 

        for(int i = right - 1; i >= left; i--){
            cout<<arr[bottom  - 1][i]<<"\t";
        }
        bottom--;

        for(int i = bottom - 1; i >= top; i--){
            cout<<arr[i][left]<<"\t";
        }
        left++;
    }

}

int main(){
    vector<vector<int>> arr = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    printSprialMatrix(arr);
    return 0;
}