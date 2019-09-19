#include<bits/stdc++.h>
using namespace std;

char from[]={"ABDFJM"};
char to[]={"DXMKLD"};

int main() {
    char s[101];

    while (scanf("%s",s)==1) {
        for (int i=0; s[i];++i) {
            char c= s[i];
            int j;
            for (j=0;from[j];j++)
                if (from[j]==c) break;
            if (j==strlen(from))
                printf("%c",c);
            else
                printf("%c",to[j]);
        }
        puts("");
    }
}
