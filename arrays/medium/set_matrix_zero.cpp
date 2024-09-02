#include<iostream>
#include<vector>
using namespace std;


void setMatrixZero(vector<vector<int>> &arr, int n, int m){
    vector<int> row(m, 0);
    vector<int> col(n,0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(row[i] || col[j]){
                arr[i][j] = 0;
            }
        }
    }
}

void setMatrixZeroOptimal(vector<vector<int>> &arr, int n, int m){
    int col0 = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                if(j != 0)
                    arr[0][j] = 0;
                else col0 = 0;

                arr[i][0] = 0;
            }
        }
    }
    for(int i = 1; i < n;  i++){
        for(int j = 1; j < m; j++){
            if(arr[i][j] != 0){
                if(arr[i][0] == 0 || arr[0][j]) arr[i][j] = 0;
            }
        }
    }
    if(arr[0][0] == 0){
        for(int k = 0; k < n; k++){
            arr[0][k] = 0;
        }
    }
    if(col0 == 0){
        for(int k = 0; k < m; k++){
            arr[0][k] = 0;
        }
    }
}

int main(){
    vector<vector<int>> arr = {{1,1,1}, {1,0,1}, {1,1,1}};
    setMatrixZero(arr, 3, 3);
    for(auto it : arr){
        for(auto zt: it){
            cout<<zt<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}