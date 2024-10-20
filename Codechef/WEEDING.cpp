#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tsc; cin>>tsc;
	while(tsc--)
	{
	    int n,m,k; cin>>n>>m>>k;
	    //n-number of weeds //m-total days //k-minimum sprays required
	    int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    if(m - a[n-1] >= k-1)
	    {
	        cout<<"yes"<<endl;
	    }
	   else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}