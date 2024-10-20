#include <bits/stdc++.h>
using namespace std;

//Best Solution
bool isPal(int n){
	int rev = 0;
	int temp = n;
	while(temp != 0){
		int ld = temp % 10;
		rev = rev * 10 + ld;
		temp = temp / 10;
	}	
	return rev==n;
}

//My Attempt, using conversion of number to string
int countDigits(int n){
    int count=0;
    while(n>0){
        n /= 10;
        count++;
    }
    return count;
}

bool palindromeNum(int n){
    int digits = countDigits(n);
    string s = to_string(n);
    for(int i=0; i<digits/2; i++){
        if(s[i]!=s[digits-i-1]){
            return false;
        }
    }
    return true;
}

//Solution Attempt Without string conversion
bool palindromeNumber(int n){
    int rev=0, test = n, digits = countDigits(n);
    for(int i=0; i<digits; i++){
        int last_digit = test%10;
        rev = rev*10 + last_digit;
        test /= 10;
    }
    return (rev == n);
}

int main(){
    int n; cin>>n;
    cout<<palindromeNumber(n);
}