#include<bits/stdc++.h>
using namespace std;

int check(string s1, string s2){
    int n = s1.length();
    // Logic -> First converting to all lowercase letters
    for(int i=0; i<n; i++){
        if(s1[i]>=65 && s1[i]<=90){
            s1[i] += 32;
        }
        if(s2[i]>=65 && s2[i]<=90){
            s2[i] += 32;
        }
    }
    for(int i=0; i<n; i++){
        if(s1[i]>s2[i]){
            return 1;
        }
        else if(s1[i]<s2[i]){
            return -1;
        }
    }
    // Executes only if loop is ended
    return 0;
}

int main(){
    string s1,s2;
    // Input
    getline(cin, s1);
    getline(cin, s2);
    cout<<check(s1,s2);
}