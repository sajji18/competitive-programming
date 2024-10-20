#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0; cin>>n;
    cin.ignore();
    while(n--){
        int flag=0;
        string s;
        getline(cin,s);
        for(int i=0; i<3; i++){
            if(i==0){
                if(s[i]=='+'){
                    ++x;
                    flag=1;
                }
                else if(s[i]=='-'){
                    --x;
                    flag=1;
                }
            }
            else if(i==1 && flag!=1){
               if(s[i]=='+'){
                    x++;
                }
                else if(s[i]=='-'){
                    x--;
                } 
            }
        }
    }
    cout<<x<<endl;
}