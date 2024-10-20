#include <iostream>
#include <math.h>
using namespace std;

//TIME LIMIT EXCEEDED

int main() {
	// your code goes here
	int tsc; cin>>tsc;
	while(tsc--)
	{
	    //input
		int n,k; cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

	    //operation
		for(int i=0; i<n; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				if(fabs(i-j)>=k)
				{
					if(a[i]>=a[j])
					{
						swap(a[i], a[j]);
					}
				}
			}
			cout<<a[i]<<" ";
		}
		cout<<endl;
	    //output
	   // for(int i=0; i<n; i++)
	   // {
	   //     cout<<a[i]<<" ";
	   // }
	   // cout<<endl;
	}
	return 0;
}
