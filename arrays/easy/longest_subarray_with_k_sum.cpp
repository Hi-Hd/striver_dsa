#include<iostream>
#include<map>
#include<vector>
#include<stack>
#include<queue>
using namespace std;



int main(){
    
    vector<int> v1(5,100);
    vector<int> v2 = {1,2,3,4,5};
    
    //v2 = {1,2,3,4,5};
    v2.insert(v2.begin() + 2,2,5);
    //v2 = {1,2,5,5,3,4,5}
    for(auto it: v2){
        cout<<it<<" ";
    }

    stack<int> st;
    priority_queue<int, vector<int>, greater<int>> pq;
    st.find(3);//returns an iterator that points to 3 if not found returns st.end();
    st.delete(5);//deletes and maintains order.
    return 0;
}