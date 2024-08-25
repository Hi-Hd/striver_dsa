#include<iostream>
#include<vector>
using namespace std;

int searchInRotatedWithDuplicates(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int middle = (low + high) / 2;
        cout<<"pass before:";
        cout<<low<<"\t"<<middle<<"\t"<<high<<"\n";
        if(arr[middle] == key) return middle;
        if(arr[middle] == arr[low] && arr[middle] == arr[high]){
            low += 1;
            high -= 1;
            continue;
        }
        if(arr[middle] >= arr[low]){
            //left is sorted
            if(arr[low] <= key && arr[middle] >= key) high = middle - 1;
            else low = middle + 1;
        }else{
            //right is sorted
            if(arr[high] >= key && arr[middle] <= key) low = middle + 1;
            else high = middle - 1;
        }
        cout<<"pass after:";
        cout<<low<<"\t"<<middle<<"\t"<<high<<"\n";
    }
    return -1;
}

int main(){
    vector<int> arr = {3,1,2,3,3,3,3};
    cout<<searchInRotatedWithDuplicates(arr, 1);


    return 0;
}