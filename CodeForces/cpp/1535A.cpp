#include <bits/stdc++.h>
using namespace std;

// Basically the greatest and the second greatest element must be in the two opposite halfs of the array

int main(){
    int t; cin>>t;
    while(t--) {
        int arr[4];
        for(int i=0; i<4; i++) {
            cin>>arr[i];
        }
        int temp[4] = {arr[0], arr[1], arr[2], arr[3]};
        sort(temp, temp+4);

        int max = temp[3];
        int second_max = temp[2];
        
        int max_idx, second_max_idx;

        for(int i=0; i<4; i++) {
            if(arr[i] == max) {
                max_idx = i;
            }
            if (arr[i] == second_max) {
                second_max_idx = i;
            }
        }

        if ((max_idx <= 1 && second_max_idx >= 2) || (second_max_idx <= 1 && max_idx >= 2)) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}