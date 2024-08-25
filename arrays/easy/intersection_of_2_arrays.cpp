#include<iostream>
#include<vector>
using namespace std;

vector<int> intersectionOfArray(vector<int> arr1, vector<int> arr2){
    int s1 = arr1.size();
    int s2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> arrayIntersection;
    while(i < s1 && j < s2){
        if(arr1[i] == arr2[j]){
            if(arrayIntersection.empty() || arrayIntersection.back() != arr1[i]){
                arrayIntersection.emplace_back(arr1[i]);
                i++;
                j++;
                cout<<"placed";
            }
        }
        else if(arr1[i] < arr2[j]) i++;
        else if(arr2[j] < arr1[i]) j++;
    }
    return arrayIntersection;
}

int main(){ 
    vector<int> arr1 = {1,2,2,3,3,4,5,6};
    vector<int> arr2 = {2,3,3,5,6,6,7};
    vector<int> arrayIntersection = intersectionOfArray(arr1, arr2);
    for(int i = 0; i < arrayIntersection.size(); i++){
        cout<<arrayIntersection[i]<<"\t";
    }


    return 0;
}