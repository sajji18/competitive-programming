#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
int h[N];

//My attempt -> TC - O(n), SC - O(n)
int majElement(int arr[], int n){
    int flag=0,j;
    //storing counts
    for(int i=0; i<n; i++){
        h[arr[i]]++;
    }
    //checking the hash array for count>n/2
    for(j=0; j<N; j++){
        if(h[j]>n/2){
            flag=1;
            break;
        }
    }
    //breaking condition
    if(flag==0){
        return -1;
    }
    else{
        for(int i=0; i<n; i++){
            if(arr[i]==j){
                return i;
            }
        }
    }
}

//Efficient SOlution -> TC - O(n), SC -> O(1)
int findMajority(int arr[], int n){
	int res = 0, count = 1;
        //part 1 of algorithm, finding majority candidate
    	for(int i = 1; i < n; i++)
    	{
    		if(arr[res] == arr[i])
    			count++;
    		else 
    			count --;

    		if(count == 0)
    		{
    			res = i; count = 1;
    		}
    	}
        //part 2 of algorithm, checking if the candidate is actually majority
    	count = 0;
    	for(int i = 0; i < n; i++)
    		if(arr[res] == arr[i])
    			count++;
    	if(count <= n /2)
    		res = -1;
    	return res; 
}

int main(){
    int arr[] = {-3,3,4,8,8,8,8,8};
    cout<<majElement(arr,8);
}