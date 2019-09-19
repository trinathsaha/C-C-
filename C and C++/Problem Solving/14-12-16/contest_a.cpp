#include<bits/stdc++.h>
using namespace std;

int coin[]= {1,5,10,25,50};
int to_make;
int dp[30002][6];

int call(int made, int coin_no) {
    if (made==to_make) {
        return 1;
    }
    if (made>to_make) return 0;
    if (dp[made][coin_no]!=-1)
        return dp[made][coin_no];
    int ans= 0;
    for (int i=coin_no;i<=4;++i) {
        ans+= call(made+coin[i],i);
    }
    return dp[made][coin_no]=ans;
}

int main() {
    while (scanf("%d",&to_make)==1) {
        memset(dp,-1,sizeof(dp));
        printf("%d\n",call(0,0));
    }
}
