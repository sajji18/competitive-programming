#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    int arr[m];
    for(int i=0; i<m; i++) {
        cin>>arr[i];
    }
    // [1, 2, 3, 4]
    // Tasks => [3, 2, 3]
    // initially at 1 ---> 3 ---> 2 ---> 3 (All in cyclic order)
    long  long int time = 0, pos = 1;
    for(int i=0; i<=m-1; i++) {
        if (arr[i] >= pos) {
            time += arr[i] - pos;
        }
        else {
            time += n - pos + arr[i];
        }
        pos = arr[i];
    }
    cout<<time<<endl;
}