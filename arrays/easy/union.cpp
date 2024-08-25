#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedArray(vector<int> arr1, vector<int> arr2){
    int i = 0;
    int j = 0;
    int size1 = arr1.size();
    int size2 = arr2.size();
    vector<int> unionArr;
    while(i < size1 && j < size2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.emplace_back(arr1[i]);
            }
            i++;
        }
        else{
            if(arr1[i] >= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.emplace_back(arr2[j]);
            }
            j++;
            }
        }
    }
    while(j < size2){
        if(arr1[i] >= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.emplace_back(arr2[j]);
            }
            j++;
        }
    }
    while(i < size1){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.emplace_back(arr1[i]);
            }
            i++;
        }
    }
    return unionArr;

}
int main(){
    

    return 0;
}