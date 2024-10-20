#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    int sum1=0, sum2=0, sum3=0;
    for(int i=0; i<n; i++){
            sum1 += arr[i][0];
            sum2 += arr[i][1];
            sum3 += arr[i][2];
    }

    if(sum1==0 and sum2==0 and sum3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}