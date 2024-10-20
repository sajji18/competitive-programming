#include <bits/stdc++.h>
using namespace std;

//EFFICIENT SOLUTION - O(n)
int maxEvenOdd(int arr[], int n){
	int res = 1;
	int curr = 1;
	for(int i = 1; i < n; i++){
			if((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0)
			   ||(arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)){
					curr++;
					res = max(res, curr);
				}
				else
					curr = 1;
	}
	return res;
}

//My Attempt - O(n)
// int maxLen(int arr[], int n)
// {
//     int k, count = 1, ml = 0;
//     if ((arr[0]) % 2 == 0)
//         k = 1;
//     else
//         k = 0;

//     for (int i = 1; i < n; i++)
//     {
//         if (((arr[i]) % 2 == 0) && (k == 0))
//         {
//             k = 1;
//             count += 1;
//             if(i==n-1){
//                 count += 1;
//                 ml = max(ml, count);
//             }
//         }
//         else if (((arr[i]) % 2 == 1) && (k == 1))
//         {
//             k = 0;
//             count += 1;
//             if(i==n-1){
//                 count += 1;
//                 ml = max(ml, count);
//             }
//         }
//         else if ((((arr[i]) % 2 == 1) && (k == 0)) || (((arr[i]) % 2 == 0) && (k == 1)))
//         {
//             ml = max(ml, count);
//             count = 0;
//         }
//     }
//     return ml;
// }

//NAIVE SOLUTION - O(N^2)
// int maxEvenOdd(int arr[], int n){
// 	int res = 1;
// 	for(int i = 0; i < n; i++){
// 		int curr = 1;
//         for(int j = i + 1; j < n; j++)
// 		{
// 			if((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0)
// 			   ||(arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
// 				curr++;
// 			else
// 				break;
// 		}
// 		res = max(res, curr);
// 	}
// 	return res;
// }

int main()
{
    int arr[] = {5,10,20,6,3,8};
    // cout << maxLen(arr, 6);
}