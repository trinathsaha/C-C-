#include<stdio.h>

int main() {
    long long int sum=0;
    //start time
    for (int i=1;i<=2000000000;++i)
        sum+=i;
    // end time

    printf("%lld\n",sum);

    return 0;
}
