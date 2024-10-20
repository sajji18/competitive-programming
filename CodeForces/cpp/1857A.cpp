#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n], count=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==1){
                count++;
            }
        }
        if(count%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}