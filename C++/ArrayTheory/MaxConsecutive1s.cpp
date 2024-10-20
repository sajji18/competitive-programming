#include <bits/stdc++.h>
using namespace std;

//My Attempt -> TC - O(n^2)
int max1s(int arr[], int n){
    int count = 0, streak=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1)
        {
            count = 1;
            for(int j=i+1; j<n; j++){
                if(arr[j]==1){
                    count +=1;
                }
                else if(arr[j]!=1){
                    break;
                }
            }
            streak = max(streak,count); 
        }
    }
    return streak;
}

//EFFICIENT Solution Attempt - O(n)
int max1(int arr[], int n){
    int res=0,strk=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1)
        {
            res++;
            strk = max(strk,res);
        }
        else if(arr[i]!=1){
            res=0;
        }
    }
    return strk;
}


//NAIVE Solution
int maxConsecutiveOnes(int arr[], int n){
	int res = 0;
	for(int i = 0; i < n; i++){
		int curr = 0;
		for(int j = i; j < n; j++){
			if(arr[j] == 1) curr++;
			else break;
		}
		res = max(res, curr);
	}	
	return res;
}

//Efficient Solution
int maxConsecutiveOnes(int arr[], int n){
	int res = 0, curr = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == 0)
			curr = 0;
		else{
			curr++;
			res = max(res, curr);
		}
	}
	return res;
}

int main(){
    int arr[] = {1,0,1,1,1,1,0,1,1,1,1,1,0,0,1,0,1,1,1};
    cout<<max1(arr,19);
}