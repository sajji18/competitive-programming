#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
int h[N];

//My Attempt - O(n*N)
int maxAppEl(int l[],int r[], int n){
    //storing counts
    for(int i=0; i<n; i++){
        for(int j=l[i]; j<=r[i]; j++){
            h[j]++;
        }
    }
    //finding max count, note that size of hash array is N
    int max=0;
    for(int i=1; i<N; i++){
        if(h[i]>h[max]){
            max = i;
        }
    }
    // returning index of max count
    return max;
}

//Efficient Solution
int maxOccEl(int l[], int r[], int n){
    int freq[101] = {0};
    for(int i=0; i<n; i++){
        freq[l[i]]++;
        freq[r[i]+1]--;
    }
    int res=0;
    for(int i=0; i<100; i++){
        freq[i] = freq[i-1] + freq[i];
        if(freq[res]<freq[i]){
            res = i;
        }
    }
    return res;
}

int main(){
    int l[] = {1,2,5,15};
    int r[] = {5,8,7,18};
    cout<<maxAppEl(l,r,4);
}