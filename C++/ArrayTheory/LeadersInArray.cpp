#include <bits/stdc++.h>
using namespace std;

//My Attempt - O(n^2)
void leaders(int arr[], int n){
    int flag;
    for(int i=0; i<n; i++){
        flag = 0;
        for(int j=i+1; j<n; j++){
            if(arr[i]<=arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<arr[i]<<" ";
        }
    }
}

//Efficient Solution - O(n^2)
void leaders(int arr[], int n)
{
    //Rightmost Element is always a leader
	int curr_ldr = arr[n - 1];

	cout<<curr_ldr<<" ";

	for(int i = n - 2; i >= 0; i--)
	{
		if(curr_ldr < arr[i])
		{
			curr_ldr = arr[i];

			cout<<curr_ldr<<" ";
		}
	}
}

int main(){
    int arr[] = {7,10,4,10,6,5,2};
    leaders(arr,7);
}