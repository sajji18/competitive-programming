#include <iostream>
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