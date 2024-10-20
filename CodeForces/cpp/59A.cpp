#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int upper = 0, lower = 0;
    for (auto character : s) {
        if (character >= 97) {
            lower ++;
        }
        else {
            upper++;
        }
    }

    if (upper > lower) {
        for (int i=0; i<s.length(); i++) {
            if (s[i] >= 97) {
                s[i] -= 32;
            }
        }
    }
    else {
        for (int i=0; i<s.length(); i++) {
            if (s[i] < 97) {
                s[i] += 32;
            }
        }
    }
    cout<<s<<endl;
}