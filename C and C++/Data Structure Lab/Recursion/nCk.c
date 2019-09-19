#include <stdio.h>
int nCk(int n,int k)
{
    if(n<k)return 0;
    if(n==k)return 1;
    if(k==1)return n;

    return nCk(n-1,k-1)+nCk(n-1,k);

}
main()
{
    int n,k;
    printf("Enter the value of n and k : \n");
    scanf("%d %d",&n,&k);
    printf("The answer is %d\n",nCk(n,k));
    return 0;

}
