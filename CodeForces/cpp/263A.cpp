#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5][5];
    int col, row;
    // Input
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                row=i+1;
                col=j+1;
            }
        }
    } 
    int ans;
    ans = fabs(row-3) + fabs(col-3);
    cout<<ans;
}