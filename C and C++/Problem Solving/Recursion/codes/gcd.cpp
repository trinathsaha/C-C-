#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
    if (!b) return a;
    return gcd(b,a%b);
}

int main() {
    cout<<gcd(8,36)<<endl;
    cout<<gcd(10,5)<<endl;
    cout<<gcd(7,31)<<endl;
    return 0;
}
