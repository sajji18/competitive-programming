#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--) {
        string s[3];
        for(int i=0; i<3; i++) {
            cin>>s[i];
        }
        int idx;
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                if (s[i][j] == '?') {
                    idx = i;
                    break;
                }
            }
        }
        string s_req = s[idx];
        int vala = s_req.find('A');
        int valb = s_req.find('B');
        int valc = s_req.find('C');

        if (vala == -1) cout<<"A"<<endl;
        else if (valb == -1) cout<<"B"<<endl;
        else if (valc == -1) cout<<"C"<<endl;
    }
}