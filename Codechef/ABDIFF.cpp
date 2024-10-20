#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a,b; cin>>a>>b;
    int output = a*b, sum = a+b;
    cout<<fabs(output-sum);
	return 0;
}