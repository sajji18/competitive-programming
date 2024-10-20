#include <bits/stdc++.h>
using namespace std;

//My Attempt -> TC - O(n), AuxSpace - O(n)
int eqPt(int arr[], int n){
    int pf[n];
    pf[0] = arr[0];
    for(int i=1; i<n; i++){
        pf[i] = pf[i-1] + arr[i];
    }
    for(int i=0; i<n; i++){
        if(i>0 && i< n-1){
            if(pf[i-1] == (pf[n-1] - pf[i])){
                return true;
            }
        }
        else if(i==0){
            if((pf[n-1] - pf[0]) == 0){
                return true;
            }
        }
        else if(i==n-1){
            if(pf[i-1]==0){
                return true;
            }
        }
    }
    return false;
}

//Best Solution
int equilibrium(int arr[], int n)
{
	int sum = 0; // initialize sum of whole array
	int leftsum = 0; // initialize leftsum

	/* Find sum of the whole array */
	for (int i = 0; i < n; ++i)
		sum += arr[i];

	for (int i = 0; i < n; ++i) {
		sum -= arr[i]; // sum is now right sum for index i

		if (leftsum == sum)
			return i;

		leftsum += arr[i];
	}
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<eqPt(arr,n);
}