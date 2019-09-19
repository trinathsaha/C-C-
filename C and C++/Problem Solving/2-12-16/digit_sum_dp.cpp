#include<bits/stdc++.h>
using namespace std;

int a[]= {1,2,3,5};
int dp[10][2];

int call(int i, int sum) {
    if (i==4) {
        if (sum==0) return 1;
        else return 0;
    }
    if (dp[i][sum]!=-1) return dp[i][sum];
    // nilam na
    int ans= 0;
    ans+= call(i+1,sum);
    // nilam
    ans+= call(i+1,(sum+a[i])%2);
    dp[i][sum]= ans;
    return ans;
}

int main() {
    memset(dp,-1,sizeof (dp));
    call(0,0);
    return 0;
}
