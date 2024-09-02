#include<iostream>
#include<vector>
using namespace std;

long long pascalsTrianleVariation1(int r, int c){
    long long factorailR = 1;
    long long factorialC = 1;
    long long helper = 1;
    for(int i = 1; i < r; i++){
        factorailR *= i;
    }
    for(int i = 1; i < c; i++){
        factorialC *= i;
    }
    for(int i = 1; i < r - c + 1; i++){
        helper *= i;
    }
    return (factorailR / (factorialC * helper));
}

vector<long long> pascalsTriangleVariation2(int n){
    vector<long long> ans;
    for(int i = 1; i <= n; i++){
        ans.emplace_back(pascalsTrianleVariation1(n, i));
    }
    return ans;

}

vector<long long> pascalsTriangleVariation2Optimized(int n){
    vector<long long> temp;
    long long ans = 1;
    temp.emplace_back(1);
    for(int i = 1; i < n; i++){
        ans = ans *  (n - i);
        ans /= i;
        temp.emplace_back(ans);
    }
    return temp;
}

vector<vector<int>> pascalsTriangleVariation3(int n){
    vector<vector<int>> ans;
    for(int i = 1; i <= n; i++){
        ans.emplace_back(pascalsTriangleVariation2Optimized(i));
    }
    return ans;
}

int main(){
    vector<vector<int>> ans;
    ans = pascalsTriangleVariation3(10);
    for(auto it: ans){
        for(auto zt: it){
            cout<<zt<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}