#include <bits/stdc++.h>
using namespace std;
// const int N = 1e5;
// int hash[N];

int main() {
	int t;
	cin>>t;
   
	while(t--)
	{
	    //Input
	   int n,minRunways=0,k=0; cin>>n;
	   int a[n], d[n];
          //Hash Array
        const int N = 1e5;
        int hash[N];
        for(int i=0; i<N; i++){
            hash[i] = 0;
        }
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        hash[a[i]]++;
	    }
	    for(int i=0; i<n; i++){
	        cin>>d[i];
	        hash[d[i]]++;
	    }
        for(int i=0; i<N; i++){
	        cout<<hash[i]<<" ";
	    }
	    
	    // for(int i=0; i<N; i++){
	    //     if(hash[i]>1){
	    //         k = hash[i];
	    //     }
	    //     minRunways = max(minRunways,k);
	    // }
	    // cout<<minRunways<<endl;
	   
	}
	return 0;
}