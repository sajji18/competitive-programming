#include <bits/stdc++.h>
using namespace std;

int remDup(int arr[], int n){
    int res = 1;
    for(int i=1; i<n; i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int main(){
    string s; cin>>s;
    int n = s.length(), flag=0;

    for(int i=0; i<n; i++){
        if(s[i]=='h' && flag==0){
            flag=1;
        }
        else if(s[i]=='e' && flag==1){
            flag=2;
        }
        else if(s[i]=='l' && flag==2){
            flag=3;
        }
        else if(s[i]=='l' && flag==3){
            flag=4;
        }
        else if(s[i]=='o' && flag==4){
            flag=5;
        }
    }
    if(flag==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}