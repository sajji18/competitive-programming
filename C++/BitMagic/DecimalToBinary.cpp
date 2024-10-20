#include <bits/stdc++.h>

int numToBinary(int n){
    std::string str = "";
    while(n > 0){
        str += std::to_string(n % 2);
        n /= 2;
    }
    return std::stoi(str);
}

int main(){
    return 0;
}