#include <bits/stdc++.h>
using namespace std;

//inserting an element in array
int insert(int arr[], int n, int x, int cap, int pos)
{
    //cap is the total size, n is the filled size
    if(n==cap)
    {
        return n;
    }
    //finding index of position to be inserted
    int idx = pos - 1;
    //shifting each element one space adjacent
    for(int i=n-1; i>=idx; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[idx] = x;
    return n+1;
}

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

int deleteElement(int arr[], int n, int x)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i==n){
        return n;
    }
    for(int j=i; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    return n-1;
}

//naive approach, TC - O(n^2)
int getlargest(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        bool flag=true;
        for(int j=i;j<n;++j)
        {
            if(arr[j]>arr[i])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
    {
        return i;
    }
    }
    
    return -1;
}

int getLargest(int arr[], int n)
{
    int max=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==max)
        {
            return i;
        }
    }
}
// TC - Theta(n), best solution
int getLargest(int arr[], int n)
{
    int res = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[res])
        {
            res = i;
        }
    }
    return res;
}

int main()
{
    // int a[4] = {10,5,20,8};
    // cout<<getLargest(a,4);
    return 0;
}