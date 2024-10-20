#include <iostream>
using namespace std;

class Solution {
private:
    int flag=1;
public:
    void checkPalinString(string s)
    {
        int t = s.size();
        for(int i=0; i<t; i++)
        {
            if(s[i]!=s[t-i-1])
            {
                flag=0;
                break;
            }
        }
    }
    
    int PalinArray(int a[], int n)
    {
        for(int i=0; i<n; i++)
        {
            string str = to_string(a[i]);
            checkPalinString(str);
            if(flag==0){
                return flag;
                break;
            }
        }
        if(flag==1){
            return flag;
        }
    }
};