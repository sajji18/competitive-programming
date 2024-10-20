#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[8];
    for (int i=1; i<8; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i=1; i<8; i++) {
        sum += arr[i];
        if (sum >= n) {
            cout<<i; break;
        }
        if (i == 7) {
            i = 0;
        }
    }
}