#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n, count=2, res=0; cin>>n;
        
        // if n->15 : divisors are 1, 3, 5, 15 no even divisors so no continuois interval
        if(n%2==1){
            cout<<1<<endl;
        }
        else{
            for(int i=3; i*i <=n; i++){
                if(n%i==0){
                    count++;
                }
                else{
                    res = max(res, count);
                    count=0;
                }
            }
            cout<<res<<endl;
        }
	}
	return 0;
}
