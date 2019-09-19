#include<bits/stdc++.h>
using namespace std;

int a[]= {1,2,3,5};

int call(int i, int sum) {
    if (i==4) {
        if (sum%2==0) {
            printf("sum= %d, One found!\n",sum);
            return 1;
        }
        else {
            printf("sum= %d, Odd!\n",sum);
            return 0;
        }
    }
    // nilam na
    int ans= 0;
    printf("%d nilam na.\n",a[i]);
    ans+= call(i+1,sum);
    // nilam
    printf("%d nilam.\n",a[i]);
    ans+= call(i+1,sum+a[i]);

    printf("%d e %d sum niye possible way= %d\n",a[i],sum,ans);

    return ans;
}

int main() {
    call(0,0);
    return 0;
}
