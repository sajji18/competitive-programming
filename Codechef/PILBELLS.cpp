#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,k,p, manaLevel;
        cin>>n>>x>>k>>p;
        if(k==n){
            manaLevel = p+x*10+(k-x)*5+20;
        }
        else if(k<=x){
            manaLevel = p+k*10;
        }
        else if(k>x||k!=n){
            manaLevel = p+x*10+(k-x)*5;
        }
        cout<<manaLevel<<endl;
	}
	return 0;
}
