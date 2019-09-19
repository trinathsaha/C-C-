#include <stdio.h>
int array[10005];
int sum(int n)
{
    if(n==0)return array[n];
    return array[n]+sum(n-1);

}
main()
{
    int n,i,Sum;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&array[i]);

    }
    Sum=sum(n-1);
    printf("The sum is : %d\n",Sum);
    return 0;

}
