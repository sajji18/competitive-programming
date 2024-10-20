#include <iostream>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--)
	{
	    int n,k; cin>>n;
	    string s,t,u;
	    cin>>s>>t>>u;
	    
	    //k value
	    if(s[0]<t[0]){
	    k = t[0] - s[0];
	    }
	    else if(s[0]>t[0]){
	        k = 26-(s[0]-t[0]);
	    }
	    else if(s[0]==t[0])
	    {
	        k=0;
	    }
	   // cout<<k<<endl;
	   for(int i=0; i<n; i++)
	   {
	       if(u[i]+k>122)
	       {
	           int dump = k - ('z'-u[i]);
	           u[i] = 'a' + dump-1;
	       }
	       else{
	       u[i] += k;
	       }
	   }
	   cout<<u<<endl;
	}
	return 0;
}
