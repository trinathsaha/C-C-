#include<stdio.h>
#include<string.h>

//package hello
char s[101][101];
bool v[101][101];
int row,col;
int ff(int i,int j) {
    if (i<0||j<0||i>=row||j>=col)
        return 0;
    if (v[i][j]) return 0;
    if (s[i][j]=='L') return 0;
    v[i][j]= 1;
    int ans=0;
    ans+=ff(i-1,j);
    ans+=ff(i+1,j);
    ans+=ff(i,j-1);
    ans+=ff(i,j+1);
    return ans;
}

int main() {
    int i,j;
    int t;
    scanf("%d",&t);
    for (int x=1;x<=t;++x) {
        v[101][101]={0};
        row= 2,col= 2;
        for (i=0;i<row;++i)
            for (j=0;j<col;++j)
                v[i][j]= 0;

        memset(v,100,sizeof(v));
        for (i=0;i<row;++i)
            for (j=0;j<col;++j)
                printf("%d ",v[row][col]);
    }

}
