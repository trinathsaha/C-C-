#include<bits/stdc++.h>
using namespace std;
bool vis[100];
int num[100];
void func(int i,int number) {
    if (i==number+1) {
        for (int j=1;j<=number;++j)
            printf("%d ",num[j]);
        puts("");
        return;
    }
    for (int j=1;j<=number;++j) {
        if (vis[j]==0) {
            vis[j]=1;
            num[i]= j;
            func(i+1,number);
            vis[j]=0;
        }
    }
    printf("Hello\n");
}

int main() {
    func(1,4);
    return 0;
    int a[]= {5,3,2,1};
    int b[100][100];
    sort(a,a+4);
    int cnt=0;
    do {

        for (int i=0;i<2;++i) {
            printf("%d ",a[i]);
        }
        puts("");
        cnt++;
    }
    while (next_permutation(a,a+4));
    printf("Total: %d\n",cnt);
    return 0;
}
