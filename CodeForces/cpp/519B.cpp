#include <bits/stdc++.h>
using namespace std;

// const int N = 1e9+1;
// int hashed[N];

int main(){
    int n; cin>>n;
    int arr[n], brr[n-1], crr[n-2];
    for (int i=0; i<n; i++) cin>>arr[i];
    for (int i=0; i<n-1; i++) cin>>brr[i];
    for (int i=0; i<n-2; i++) cin>>crr[i];

    // Big problem => A is between 1 to 1e9

    // for(int i=0; i<n; i++) hashed[arr[i]]++;

    // for (int i=0; i<n-1; i++) {
    //     hashed[brr[i]]--;
    // }
    // for (int i=0; i<n; i++) {
    //     if (hashed[arr[i]] > 0) {
    //         cout<<arr[i]<<endl;
    //         break;
    //     }
    // }

    // for (int i=0; i<n-1; i++) hashed[brr[i]]++;
    // for (int i=0; i<n-2; i++) {
    //     hashed[crr[i]]--;
    // }
    // for (int i=0; i<n-1; i++) {
    //     if (hashed[brr[i]] > 0) {
    //         cout<<brr[i]<<endl;
    //         break;
    //     }
    // }

    sort(arr, arr+n);
    sort(brr, brr+n-1);
    sort(crr, crr+n-2);

    // for(int i=0; i<n-2; i++) {
    //     cout<<arr[i]<<" "<<brr[i]<<" "<<crr[i]<<endl;
    // }
    // cout<<arr[n-2]<<" "<<brr[n-2]<<endl;
    // cout<<arr[n-1]<<endl;

    bool found_first = false;
    for (int i=0; i<n-1; i++) {
        if (arr[i] != brr[i]) {
            cout<<arr[i]<<endl;
            found_first = true;
            break;
        }
    }
    if (!found_first) cout<<arr[n-1]<<endl;

    bool found_second = false;
    for (int i=0; i<n-2; i++) {
        if (brr[i] != crr[i]) {
            cout<<brr[i]<<endl;
            found_second = true;
            break;
        }
    }
    if (!found_second) cout<<brr[n-2]<<endl;
}