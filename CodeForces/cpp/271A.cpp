#include <bits/stdc++.h>
using namespace std;

int main(){
    int y; cin>>y;
    while(true) {
        y++;
        int arr[10] = {0};
        int temp = y;
        while(temp > 0) {
            int last_digit = temp % 10;
            arr[last_digit]++;
            temp = temp / 10;
        }
        bool found = true;
        for (int i=0; i<10; i++) {
            // cout<<arr[i]<<" ";
            if (arr[i] > 1) {
                found = false;
            }
        }
        if (found) {
            break;
        }
    }
    cout<<y<<endl;
}