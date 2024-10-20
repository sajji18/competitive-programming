#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> friends_finger, finger_choices;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        friends_finger.push_back(x);
    }
    int sum = accumulate(friends_finger.begin(), friends_finger.end(), 0);
    for (int i=0; i<5; i++) {
        if ((sum + i) % (n + 1) != 0) {
            finger_choices.push_back(i);
        } 
    }
    cout<<finger_choices.size();
}