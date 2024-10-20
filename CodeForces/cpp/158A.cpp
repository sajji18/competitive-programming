#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,flag=0; 
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n/2; i++){
        if(arr[i]!=arr[n-i-1]){
            flag=1;
            break;
        }
    }
    int count = 0;
    if(flag==1 || (flag==0 && arr[0]!=0)){
        for(int i=0; i<n; i++){
            if(arr[i]>=arr[k-1]){
                if((arr[i]!=0 && arr[k-1]==0)||(arr[i]!=0 && arr[k-1]!=0)){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
