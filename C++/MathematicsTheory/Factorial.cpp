#include <bits/stdc++.h>
using namespace std;

//My attempt -> Recursive Function
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}

//Efficient Solution
int factorial(int n){
    int res=1;
    for(int i=2; i<=n; i++){
        res = res*i;
    }
    return res;
}

int main(){
    return 0;
}