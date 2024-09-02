#include<iostream>
#include<vector>
using namespace std;

void rearrangeArray(vector<int>& arr) {
    vector<int> positive;
    vector<int> negative;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < 0) negative.emplace_back(arr[i]);
        else if(arr[i] > 0) positive.emplace_back(arr[i]);
    }

    int j = 0;
    int i = 0;
    while(j < arr.size() / 2){
        arr[i] = positive[j];
        i++;
        arr[i] = negative[j];
        j++;
        i++;
    }
}

vector<int> rearrangeArray2Pointer(vector<int> arr){
    vector<int> ans(arr.size(),0);
    int pos = 0;
    int neg = 1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > 0){
            ans[pos] = arr[i];
            pos += 2;
        }else if(arr[i] < 0){
            ans[neg] = arr[i];
            neg += 2;
        }
        cout<<pos<<"\t"<<neg<<"\n";
    }
    return ans;

}

vector<int> rearrangeArray2PointerUnequal(vector<int> arr){
    vector<int> positive;
    vector<int> negative;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] < 0) negative.emplace_back(arr[i]);
        else if(arr[i] > 0) positive.emplace_back(arr[i]);
    }

    int posInd = 0;
    int negInd = 0;
    int i = 0;
    int k = 0;
    while(posInd < positive.size() && negInd < negative.size()){
        arr[i] = positive[posInd];
        i++;
        posInd++;
        arr[i] = negative[negInd];
        negInd++;
        i++;
    }
    while(posInd < positive.size()){
        arr[i] = positive[posInd];
        i++;
        posInd++;
    }
    while(negInd < negative.size()){
        arr[i] = negative[negInd];
        negInd++;
        i++;
    }
    return arr;

}

int main(){
    vector<int> arr = {-1,2,3,4,-3,1};
    vector<int> ans = rearrangeArray2PointerUnequal(arr);
    for(auto it: ans){
        cout<<it<<"\t";
    }


    return 0;
}