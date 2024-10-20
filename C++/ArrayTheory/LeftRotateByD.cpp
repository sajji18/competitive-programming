#include <bits/stdc++.h>
using namespace std;

//My Attempt 1 - Works for only cases given in video
// void rotArray(int arr[], int n, int d){
//     int temp[n], res=0;
//     for(int i=0; i<n; i++){
//         if(i+d<n-1){
//             temp[res] = arr[i];
//             arr[i] = arr[i+d];
//             res++;
//         }
//     }
//     res = 0;
//     if(n%2==1){
//         for(int i=0; i<n; i++){
//                 if(i+d>n-1){
//                 arr[i] = temp[res];
//                 res++;
//             }
//         }
//     }
//     else if(n%2==0){
//         for(int i=0; i<n; i++){
//             if(i+d>n-1){
//             int t = arr[i];
//             temp[res+1] = t;
//             arr[i] = temp[res];
//             res++;
//             }
//         }
//     }
// }

//Naive Solution -> TC - O(n*d)
//  void lRotateOne(int arr[], int n){
// 	int temp = arr[0];
// 	for(int i = 1; i < n; i++){
// 		arr[i - 1] = arr[i];
// 	}
// 	arr[n - 1] = temp;
// }

// void leftRotate(int arr[], int d, int n){
// 	for(int i = 0; i < d; i++){
// 		lRotateOne(arr, n);
// 	}
// }

// Efficient Code - My Attempt 2:
// void lRotate(int arr[], int n, int d){
//     int temp[d];
//     for(int i=0; i<n; i++){
//         if(i+d<=n-1){
//             temp[i] = arr[i+d];
//         }
//         else if(i+d>n-1){
//             temp[i] = arr[i+d-n];
//         }
//         cout<<temp[i]<<" ";
//     }
// }

//Efficient CODE 1 
// void leftRotate(int arr[], int d, int n){
// 	int temp[d];
// 	for(int i = 0; i  < d; i++){
// 		temp[i] = arr[i];
// 	}
//     for(int i = d; i  < n; i++){
// 		arr[i - d] = arr[i];
// 	}
//     for(int i = 0; i  < d; i++){
// 		arr[n - d + i] = temp[i];
// 	}	
// }

//Efficient Code 2 - Reversal Method
void reverse(int arr[], int low, int high){
	while(low < high){
		swap(arr[high], arr[low]);
		low++;
		high--;
	}
}   
void leftRotate(int arr[], int d, int n){
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}


int main(){
    int arr[] = {1,2,3,4,5};
    // lRotate(arr,5,5);
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }
}