#include <bits/stdc++.h>
using namespace std;

//Brute force Approach
int getlargest(int a[],int n)
{
    int largest=0;
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[largest])
        {
            largest=i;
        }
    }
    return largest;
}

int secondlargest(int a[],int n)
{
    int largest=getlargest(a,n);
    int res=-1;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[largest])
        {
            if(res==-1)
            res=i;
            else if(a[i]>a[res])
            res=i;
        }
    }
    return res;
}

//Efficient Approach
int secondLargest(int arr[], int n) {
    int largest = 0, secondLargest = -1;
 
    // finding the largest element in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }
 
    // finding the largest element in the array excluding
    // the largest element calculated above
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest]) {
            // first change the value of second largest
            // as soon as the next element is found
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }
    return secondLargest;
}

int main(){
    int a[] = {10, 10, 10};
    cout<<secondLargest(a,3);
    return 0;
}