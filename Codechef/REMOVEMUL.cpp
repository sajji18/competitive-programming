#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tsc; cin>>tsc;
	while(tsc--)
	{
	    //input 
	    int n,m; cin>>n>>m;
	    int s[n],q[m];
	    for(int i=0; i<m; i++)
	    {
	        cin>>q[i];
	    }
       
       // GIVES RUNTIME ERROR(TIME LIMIT EXCEED)
       // for(int i=0; i<n; i++)
	   // {
	   //     s[i]=i+1;
	   // }
	    
	    //operations, removing elements from s which are present in q;
	   // for(int i=0; i<m; i++)
	   // {
	   //     for(int j=0; j<n; j++)
	   //     {
	   //         if(q[i]==s[j])
	   //         {
	   //             s[j]=0;
	   //         }
	   //     }
       //     }
	    
	    //sum of s, sum of q
        long long int cost=(n*1LL*(n+1))/2, sum=0;
        for(int i=0; i<m; i++)
        {
            sum+=q[i];
        }
        
        //cost calculation
	    cost -= sum;
	    
	    //cost output
	    cout<<cost<<endl;
	}
	return 0;
}