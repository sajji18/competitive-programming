#include <bits/stdc++.h>
using namespace std;

// . = 0, -. = 1, -- = 2
int main(){
    stack <char> stk;
    string decoded;
    string s; cin>>s;
    bool streak = true;
    for (auto character : s) {
        if (character == '.') {
            if (!stk.empty() and stk.top() == '-' and streak == true) {
                decoded += '1';
                stk.push(character);
                streak = false;
            }
            else {
                decoded += '0';
                stk.push(character);
                streak = false;
            }
        }
        else if (character == '-') {
            if (!stk.empty() and stk.top() == '-' and streak == true) {
                decoded += '2';
                stk.push(character);
                streak = false;
            }
            else {
                stk.push(character);
                streak = true;
            }
        }
    }

    cout<<decoded<<endl;
}