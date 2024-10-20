#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int bSearch(int arr[], int n, int x){
	int low = 0, high = n - 1;
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == x){
			return mid;
        }
		else if(arr[mid] > x){
			high = mid - 1;
        }
		else{
			low = mid + 1;
        }
	}
	return -1;
}

int main(){

}