#include<bits/stdc++.h>
using namespace std;

const int MX= 100;
vector <int> g[MX+10];
bool vis[MX+10];

void dfs(int i) {
    printf("In %d\n",i);
    vis[i]=1;
    int len= g[i].size();
    for (int j=0;j<len;++j) {
        int k= g[i][j];
        if (vis[k]==1) continue;
        printf("Going %d to %d\n",i,k);
        dfs(k);
    }
    printf("Out from %d\n",i);
}

int main() {
    freopen("graph.txt","r",stdin);
    int node,edge;
    scanf("%d%d",&node,&edge);
    while (edge--) {
        int u,v;
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
    }
   for (i=1;i<=node;++i)
        if (!vis[i])
            dfs(i);
}
