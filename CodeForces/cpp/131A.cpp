#include <bits/stdc++.h>
using namespace std;

int checkCaps1(string s){
    if(s[0]>=97){
        for(int i=1; i<s.length(); i++){
            if(s[i]>=97){
                return 0;
            }
        }
        return 1;
    } 
    return 2;
}

int checkCaps2(string s){
    if(s[0]<97){
        for(int i=1; i<s.length(); i++){
            if(s[i]>=97){
                return 0;
            }
        }
        return 1;
    }
    return 2;
}

int main(){
    string s; cin>>s;

    if(checkCaps1(s)==1){
        s[0] -= 32;
        for(int i=1; i<s.length(); i++){
            s[i] += 32;
        }
        cout<<s<<endl;
    }

    else if(checkCaps2(s)==1){
        for(int i=0; i<s.length(); i++){
            s[i] += 32;
        }
        cout<<s<<endl;
    }

    else{
        cout<<s<<endl;
    }
}