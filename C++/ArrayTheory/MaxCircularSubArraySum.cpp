#include <bits/stdc++.h>
using namespace std;

//Naive Solution - O(n^2)
int circularSubArraySum(int arr[], int n){
    int res = arr[0];
    for(int i=0; i<n; i++){
        int curr_max = arr[i];
        int curr_sum = arr[i];
        for(int j=1; j<n; j++){
            int index = (i+j) % n;
            curr_sum += arr[index];
            curr_max = max(curr_sum,curr_max);
        }
        res = max(res,curr_max);    
    }
    return res;
}


//Efficient Approach - O(n)
int normalMaxSum(int arr[], int n){
    //NORMAL subarrays maximum calculation
	int res = arr[0];
	int maxEnding = arr[0];
	for(int i = 1; i < n; i++){
		maxEnding = max(maxEnding + arr[i], arr[i]);
		res = max(maxEnding, res);
	}
	return res;
}

int overallMaxSum(int arr[], int n){
    //storing normal max value
	int max_normal = normalMaxSum(arr, n);

    //handles all negative sum subarray cases
	if(max_normal < 0)
		return max_normal;
	int arr_sum = 0;
	for(int i = 0; i < n; i++){
		arr_sum += arr[i];
		arr[i] = -arr[i];
	}
    //Max of circular Subarray is total array sum + (max of normal subarray after inversion)
	int max_circular = arr_sum + normalMaxSum(arr, n);
    //final result is maximum of both normalsubarray and circularsubarray
	return max(max_circular, max_normal);
}

int main(){
    int arr[] = {5,-2,3,4};
    // cout<<circSubArrSum(arr,4);

}