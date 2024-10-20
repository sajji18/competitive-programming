#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    vector <int> v(n);
    queue <int> q;
    for (int i=0; i<n; i++) {
        v[i] = i + 1;
    }
    for (int i=0; i<n; i++) {
        int x; cin>>x;
        q.push(x);
    }
    // 1 3 1 4 2 => queue
    // 1 2 3 4 5 => vector
    while(q.size() != 1) {
        if (q.front() <= m) {
            q.pop();
            v.erase(v.begin());
        }
        else {
            int queue_front = q.front();
            int vector_front = v[0];
            q.pop();
            q.push(queue_front - m);
            v.erase(v.begin());
            v.push_back(vector_front);
        }
    }

    cout<<v[0];
}