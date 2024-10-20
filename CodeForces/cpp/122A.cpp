#include <bits/stdc++.h>
using namespace std;

bool checkLucky(int n){
    while(n>0){
        if(n%10!=4 and n%10!=7){
            return false;
        }
        n /= 10;
    }
    return true;
}

bool almostLucky(int n){
    for(int i=1; i<n; i++){
        if(checkLucky(i)){
            if(n%i==0){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n; cin>>n;
    if(checkLucky(n)){
        cout<<"YES"<<endl;
    }
    else{
        if(almostLucky(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}