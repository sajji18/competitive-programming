#include <iostream>
using namespace std;

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