#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x; cin>>n>>k>>x;
        if(x!=1)
    	{
			cout<<"YES"<<endl<<n<<endl;
			for(int i=0; i<n; i++)
			{
				cout<<1<<" ";
			}
			cout<<endl;
    	}
		
		else if(x==1)
		{
			if(k==1)
			{
				cout<<"NO"<<endl;
			}
			else if(k==2)
			{
				if(n%2==1)
				{
					cout<<"NO"<<endl;
				}
				else
				{
					cout<<"YES"<<endl<<n/2<<endl;
					for(int i=1; i<=n/2;i++)
					{
						cout<<2<<" ";
					}
					cout<<endl;
				}
			}
			else
			{
				if(n%2==0)
				{
					cout<<"YES"<<endl;
					cout<<n/2<<endl;
					for(int i=1; i<=n/2; i++)
					{
						cout<<2<<" ";
					}
					cout<<endl;
			    }
			    else if(n%2!=0)
			    {
			    	cout<<"YES"<<endl<<(n-3)/2 + 1<<endl;
			    	cout<<3<<" ";
			    	for(int i=1; i<=(n-3)/2; i++)
			    	{
			    		cout<<2<<" "<<endl;
			    	}
			    	cout<<endl;
			    }
			}
		}
	}
	return 0;
}

