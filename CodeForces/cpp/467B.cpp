#include <bits/stdc++.h>
using namespace std;

vector <int> binary(int n) {
    vector <int> binary_num(32);
    int i=0;
    while (n > 0){
        binary_num[i] = n % 2;
        n /= 2;
        i++;
    }
    return binary_num;
}

int bitcount (int n) {
    int count = 0;
    while(n > 0) {
        count++;
        n = n & (n-1);
    }
    return count;
}

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    int count = 0;

    int arr[m];
    for(int i=0; i<m; i++) {
        cin>>arr[i];
    }
    int fedor; cin>>fedor;

    for (int i=0; i<m; i++) {
        int val;
        val = fedor ^ arr[i];
        int ones = bitcount(val);
        // cout<<"Ones :"<<ones<<endl;
        if (ones <= k) count++;
    }

    cout<<count<<endl;
}