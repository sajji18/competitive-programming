#include <bits/stdc++.h>
using namespace std;

//Also gcd is the answer to the puzzle:
//If we create a rectangle of n x m, then the
//largest square tile to fill the rectangle is gcd of n and m

//Naive Solution -> TC - O(min(a,b))
int gcd(int a, int b){
    int res = min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}

//Euclid Algo Idea -> if b<a , then gcd(a,b) = gcd(a-b,a) and vice versa
int gcd(int a, int b){
	while(a!=b){
		if(a > b)
			a = a - b;
		else
			b = b - a; 
	}
	return a;
}

// Optimized Euclidean Approach -> TC - O(log(min(a,b)))
int gcd(int a, int b){
	if(b==0)
		return a;
	else
	return gcd(b, a % b);
}

int main(){
    int n,m; cin>>n>>m;
    cout<<gcd(n,m);
}