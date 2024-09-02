#include<vector>
#include<iostream>
#include<unordered_set>
using namespace std;

bool BinarySearch(vector<int> arr, int key){
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key) return true;
        if(arr[mid] > key) high = mid - 1;
        else low = mid + 1;
    }
    return false;
}

int maxConsecutiveInArray(vector<int> arr){
    sort(arr.begin(), arr.end());
    int consecuitve = -1;
    if(arr.size() == 0) return 0;
    for(int i = 0; i < arr.size(); i++){
        bool found = true;
        int cnt = 1;
        int j = arr[i];
        while(found){
            vector<int> temp(arr.begin() + i + 1, arr.end());
            if(BinarySearch(temp, j + 1)){
                cnt++;
                j++;
            }else{
                found = false;
                break;
            }
        }
        if(cnt > consecuitve) consecuitve = cnt;
    }
    return consecuitve;
}

int maxConsecutiveInArrayOptimal(vector<int> arr){
    if(arr.size() == 0) return 0;
    unordered_set<int> st;
    for(int i = 0; i < arr.size(); i++){
        st.emplace(arr[i]);
    }
    //putting all elements in the set
    int longest = 1;
    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x + 1) != st.end()){
                cnt++;
                x++;
            }
            longest = max(cnt, longest);
        }
    }
    return longest;

}

int main(){
    vector<int> arr = {102,4,100,1,101,3,2,1,1};
    cout<<maxConsecutiveInArrayOptimal(arr);

    return 0;
}