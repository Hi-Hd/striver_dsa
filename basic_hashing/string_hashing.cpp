#include<iostream>
#include<string>
using namespace std;


int main(){
    string s = "abcdazpdasdaw";
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }
    cout<<hash[0];


    return 0;
}