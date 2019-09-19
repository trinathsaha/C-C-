#include <stdio.h>
int sum(int n)
{
    if(n==0)return 0;

    return n+sum(n-1);
}
main()
{
    int n;
    scanf("%d",&n);
    printf("Sum of 1 to %d is : %d\n",n,sum(n));
    return 0;

}
