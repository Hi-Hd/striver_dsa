#include<iostream>
#include<vector>
using namespace std;

vector<int> getPeakArrayValueBrute(vector<int> arr){
    vector<int> answerArray;
    for(int i = 0; i < arr.size(); i++){
        if(i == 0 ){
            if(arr[i] > arr[i + 1]) answerArray.emplace_back(arr[i]);
        }else if(i == arr.size() - 1){
            if(arr[i] > arr[i - 1]) answerArray.emplace_back(arr[i]);
        }else{
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                answerArray.emplace_back(arr[i]);
            }
        }
    }
    return answerArray;
}

vector<int> getPeakArrayValueOptimal(vector<int> arr){
    vector<int> answerArray;
    int low = 1;
    int high = arr.size() - 2;
    if(arr.size() == 1) answerArray.emplace_back(arr[0]);
    if(arr[0] > arr[1]) answerArray.emplace_back(arr[0]);
    if(arr[arr.size() - 1] > arr[arr.size() - 2]) answerArray.emplace_back(arr[arr.size() - 1]);
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            answerArray.emplace_back(arr[mid]);
        }
        if(arr[mid] > arr[mid - 1]){
            low = mid + 1;
        }else if(arr[mid] > arr[mid + 1]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return answerArray;

}

int main(){
    vector<int> arr = {16,2,3,4,55,6,7,80,9,10};
    vector<int> answerArray = getPeakArrayValueOptimal(arr);
    for(auto it : answerArray){
        cout<<it<<"\t";
    }


    return 0;
}