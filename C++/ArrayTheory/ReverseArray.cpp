#include <bits/stdc++.h>
using namespace std;

//My Attempt - O(n), using inbuilt Swap function
void reverseArray(int arr[], int n){
    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-i-1]);
    }
}

//Efficient Solution
 void reverse(int arr[], int n)
{
	int low = 0, high = n - 1;

	while(low < high)
	{
        //Basic Swap Code
		int temp = arr[low];

		arr[low] = arr[high];

		arr[high] = temp;

		low++;
		high--;
	}
}

int main(){
    int arr[] = {30,7,6,5,10};
    reverseArray(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}