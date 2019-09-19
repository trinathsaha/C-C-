#include<bits/stdc++.h>
using namespace std;

int dr[]= {-1,-1,-1,0,0,0,1,1,1};
int dc[]= {-1,0,1,-1,0,1,-1,0,1};

floodfill(int i,int j) {
    for (int k=0;k<8;++k) {
        int nr= i+dr[k];
        int nc= i+dc[k];
        floodfill(nr,nc);
    }
}

int main() {
}
