#include <iostream>
using namespace std;

//searching in an unsorted array
int search(int arr[], int n, int x)
{
    //traverse through the array
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == x)
		{
            return i;
        }
	}
    //if no element found
	return -1;
} 