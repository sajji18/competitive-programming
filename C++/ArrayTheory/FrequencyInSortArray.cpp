#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+6;
int hsh[N];

//My Attempt, Creating a hash array and storing count
//TC -> O(n)
void freqOfArr(int arr[], int n){
    //hashing
    for(int i=0; i<n; i++){
        hsh[arr[i]]++;
    }
    bool flag = true;
    for(int i=0; i<n; i++){
        //Printing
        if(flag){
            cout<<arr[i]<<" "<<hsh[arr[i]]<<" ";
            cout<<endl;
        }
        //Logic
        if(arr[i+1]!=arr[i]){
            flag = true;
        }
        else if(arr[i+1]==arr[i]){
            flag = false;
        } 
    }
    //Finally hash arr = 0, for reusing
    for(int i=0; i<n; i++){
        hsh[arr[i]] = 0;
    }
}


//Efficient Approach, Auxiliary Space - O(1)
void printFreq(int arr[], int n){
	int freq = 1, i = 1;
	while(i < n){
		while(i < n && arr[i] == arr[i - 1]){
			freq++;
			i++;
		}
		cout<<arr[i - 1] << " " << freq << endl;
		i++;
		freq = 1;
	}
	if(n==1 || arr[n-1]!=arr[n-2])
	    cout<<arr[n-1] + " " + 1;
}

int main(){
    int arr[] = {10,10,10,25,30,30};
    freqOfArr(arr, 6);
}