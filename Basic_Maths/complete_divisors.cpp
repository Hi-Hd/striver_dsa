#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num = 154782;
    for(int i = 1; i <= int(pow(num, 0.5)); i++){
        if(num % i == 0){
            cout<<i<<"\n";
            if(num/i != i){
                cout<<num/i<<"\n";
            }
        }
    }

    return 0;
}