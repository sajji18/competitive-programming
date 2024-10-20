#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n; cin>>n;
        int a[n], cnt=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==i+1){
                cnt++;
            }
        }
        if(cnt%2==0){
            cout<<cnt/2<<endl;
        }
        else{
            cout<<(cnt+1)/2<<endl;
        }
	}
	return 0;
}
