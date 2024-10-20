#include <bits/stdc++.h>
using namespace std;

// Efficient Solution -> TC - theta(d)
int countDigits(int n){
    int count=0;
    while(n>0){
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    return 0;
}