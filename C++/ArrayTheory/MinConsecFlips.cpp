#include <bits/stdc++.h>
using namespace std;

void printGroups(int arr[], int n){
	for(int i = 1; i < n; i++)
	{
        //check change of group
		if(arr[i] != arr[i - 1])
		{
            //decide if it is beginning or end of the group
			if(arr[i] != arr[0])
                cout << "From " << i << " to ";
			else
                cout << i - 1 << endl;
		}
	}
    //handle cases where there is single last element that is to be flipped
	if(arr[n - 1] != arr[0])
        cout << n - 1 << endl;
}

int main(){

}