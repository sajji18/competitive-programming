#include <bits/stdc++.h>
using namespace std;

//Naive Approach -> TC - O(n^2)
int waterLevel(int arr[], int n){
    int res = 0;
    for(int i=1; i<n-1; i++){
        int lmax = arr[i];
        for(int j=0; j<i; j++){
            lmax = max(lmax, arr[j]);
        }
        int rmax = arr[i];
        for(int j=i+1;  j<n; j++){
            rmax = max(rmax, arr[j]);
        }
        res = res + min(rmax, lmax) - arr[i];
    }
}

// Efficient Approach
int getWater(int arr[], int n){
	int res = 0;
	for(int i = 1; i < n - 1; i++){
		int res = 0;
    	int lMax[n];
    	int rMax[n];
        //Leftmost is itself leftmax for it
    	lMax[0] = arr[0];
        //Rightmax for rightmax is itself
    	rMax[n - 1] = arr[n - 1];
        //Pre - Computation
    	for(int i = 1; i < n; i++){
            lMax[i] = max(arr[i], lMax[i - 1]);
        }
    	for(int i = n - 2; i >= 0; i--){
            rMax[i] = max(arr[i], rMax[i + 1]);
        }
    	for(int i = 1; i < n - 1; i++){
            res = res + (min(lMax[i], rMax[i]) - arr[i]);
        }
    	return res;
	}
	return res;
}

int main(){
    return 0;
}