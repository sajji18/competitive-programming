#include <bits/stdc++.h>
using namespace std;

// l1 l2 l3 l4 .... ln -> n lanterns, length l
// 0  1  2  3  .... l
// ith lantern is at ai -> this lights all pts at distance d from it

int mDif(int arr[], int n){
    int res = arr[1] - arr[0], minVal = arr[0]; 
    for(int j=1; j<n; j++){
        //check if res > new diff
        res = max(res, arr[j]-minVal);
        //check current min element with current traversed element
        minVal = min(arr[j], minVal);
    }
    return res;
}

int main(){
    // n -> lanterns, l -> street length
    int n,l; cin>>n>>l;
    double arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    double mdf = arr[1] - arr[0];
    for(int i=2; i<n; i++){
        if(arr[i]-arr[i-1] > mdf){
            mdf = arr[i] - arr[i-1];
        }
    }
    mdf /= 2;

    double left_dif=arr[0];
    double right_dif=l-arr[n-1];

    vector<double> v(0);
    v.push_back(mdf);
    v.push_back(left_dif);
    v.push_back(right_dif);

    double max_el = *max_element(v.begin(), v.end());
    cout<<setprecision(9)<<max_el<<endl;

}