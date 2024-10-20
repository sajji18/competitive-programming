#include <bits/stdc++.h>
using namespace std;

// My Attempt -> O(n)
bool checkPrime(int n){
    int res=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            res++;
        }
    }
    if(res > 2 || res < 2){
        return false;
    }
    else{
        return true;
    }
}

//Efficient Solution -> O(n^1/2)
// To check for prime, we only need to go till root(n), as divisors are always in pair
// Primes are of the form 6n +- 1, and we rule out divisible by 2 and 3 caases first 
bool checkPrime(int n){
    if(n==1){
        return false;
    }
    if(n==2 || n==3) return true;

    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5; i*i<=n; i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin>>n;
    cout<<checkPrime(n);
}