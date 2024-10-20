#include <bits/stdc++.h>
using namespace std;

int getLargest(int arr[], int n){
    int res = 0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[res]){
            res = i;
        }
    }
    return res;
}

bool checkEqual(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int tsc; cin>>tsc; 
    while(tsc--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int idx = getLargest(arr,n);
        int maxEl = arr[idx];
        vector<int> b;
        vector<int> c;
        if(checkEqual(arr,n)){
            cout<<-1<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                if(arr[i]==maxEl){
                    c.push_back(arr[i]);
                }
                else{
                    b.push_back(arr[i]);
                }
            }
            cout<<b.size()<<" "<<c.size()<<endl;

            for(int i=0; i<b.size(); i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<c.size(); i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
}