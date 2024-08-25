#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> arr1, int n){
    int sum = (n * (n + 1)) / 2;
    int gum = 0;
    for(int i = 0; i < n - 1; i++) gum += arr1[i];
    return sum - gum;

}

int main(){
    vector<int> arr1 = {1,5,3,4};
    cout<<missingNumber(arr1, 5);
    return 0;
}