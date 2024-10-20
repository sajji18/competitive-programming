#include<bits/stdc++.h>
using namespace std;

void check(string s){
    int strk=1, res=0, n=s.length();
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            strk++;
        }
        else{
            // handles all cases in the middle where change of 1 and 0 is present
            res = max(res,strk);
            strk=1;
        }
    }
    // handles last element of string
    res=max(strk,res);

    // final output
    if(res>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main(){
    string s;
    getline(cin,s);
    check(s);
    cout<<endl;
}