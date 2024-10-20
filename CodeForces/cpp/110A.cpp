#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;
    int lucky_digits = 0;
    while (n > 0) {
        int last_digit = n % 10;
        if (last_digit == 4 or last_digit == 7) {
            lucky_digits += 1;
        }
        n /= 10;
    }
    if (lucky_digits == 4 or lucky_digits == 7) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}