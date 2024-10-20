#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    string s1 = "", s2="";
    
    //lowercased
    for(int i=0; i<s.length(); i++){
        if(s[i]<97){
            s[i] += 32;
        }
    }
    // cout<<s;

    // // remove vowels
    for(int i=0; i<s.length(); i++){
        if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u' and s[i]!='y'){
            s1 += s[i];
        }
    }
    // cout<<s1;

    for(int i=0; i<s1.length(); i++){
        s2 += '.';
        s2 += s1[i];
    }
    cout<<s2<<endl;
    // // Insert . before all consonants
}