#include <bits/stdc++.h>
using namespace std;

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

// TC -> O(n*log(n))
void primeFactors(int n){
    // Looping from 2 to n as we need only prime factors
    for(int i=2; i<=n; i++){
        // checkiing if i is prime
        if(checkPrime(i)){
            // storing i in x
            int x = i;
            while(n%x==0){
                cout<<i<<" ";
                // updating x, for ex 12 is divisible by 2 and also 4, so we write 2 2 twice
                x *= i;
            }
        }
    }
}

void primeFac(int n){
    if(n<=1) cout<<1;
    for(int i=2; pow(i,2)<n; i++){
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>1)
    cout<<n<<" ";
}

// Efficient Solution -> TC - O(n^1/2)
void primeFactorization(int n){
    // explicitly checking divisibility for 2 and 3
    while(n%2==0){
        cout<<2<<" ";
        n /= 2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n /= 3;
    }
    // iterating from 5 to sqrt(n) and checking only for primes
    for(int i=5; i*i<n; i+=6){
        while(n%i==0){
            cout<<i<<" ";
            n /= i;
        }
        while(n%(i+2)==0){
            cout<<i+2<<" ";
            n /= (i+2);
        }
    }
    // handling cases where largest prime factor has only 1 power
    if(n>3){
        cout<<n<<" ";
    }

}

int main(){
    int x; cin>>x;
    primeFactorization(x);
}