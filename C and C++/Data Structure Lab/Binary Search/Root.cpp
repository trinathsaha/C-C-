//Nahian Ashraf, Roll - 02

#include <stdio.h>

main()
{
    double input,answer,high,low,mid,power;
    int n,i;
    printf("Enter the number:\n");
    scanf("%lf",&input);
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    high = input;
    low = 0.00;
    mid=(high+low)/2;

    while(high-low>=0.0000001)
    {
        mid=(high+low)/2;
        power=1;
        for(i=1;i<=n;i++)power*=mid;
        if(power>input)high=mid;
        else if(power<input)low=mid;
        else break;
    }
    printf("The root is %lf\n",mid);
    return 0;
}
