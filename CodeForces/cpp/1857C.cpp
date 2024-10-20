#include <bits/stdc++.h>
using namespace std;

int main(){
    // tsc
    int t; cin>>t; 
    while(t--){
        // a size and b size
        int n; cin>>n;
        int b_el = n*(n-1)/2;

        // b array and its max element
        vector <int> b(b_el);
        map<int, int> m;

        // input
        for(int i=0; i<b_el; i++){
            cin>>b[i];
            m[b[i]]++;
        }

        // Find the pair with the maximum value (frequency)
        auto maxElement = max_element(m.begin(), m.end(),
            [](const pair<int, int>& a, const pair<int, int>& b) {
                return a.second < b.second;
            });

        int maxId = maxElement->first;  // Get the key (ID) with maximum frequency
        
        // Logic
        int iterations = 0, const_val;
        for(auto p:m){
            iterations++;
            if(p.second!=0){
                cout<<p.first<<" ";
            }
            if(iterations==1){
                const_val = p.first;
            }
        }

        if(iterations == 1){
            if(n==2){
                cout<<1000000000<<endl;
            }

            else if(n>2){
                for(int i=iterations; i<n; i++){
                    cout<<const_val<<" ";
                }
                cout<<endl;
            }
        }

        if(iterations > 1 && iterations != n-1){
            cout<<maxId<<" ";
            for(int i=iterations+1; i<n; i++){
                cout<<1000000000<<" ";
            }
            cout<<endl;
        }

        else if(iterations == n-1 ){
            for(int i = iterations; i < n; i++){
                cout<<1000000000<<" ";
            }
            cout<<endl;
        }

    }
}

