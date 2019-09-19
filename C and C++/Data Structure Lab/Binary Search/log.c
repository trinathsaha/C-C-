//Nahian Ashraf, Roll - 02

#include <stdio.h>
#include <math.h>
main()
{
    double input,answer,high,low,mid,power;
    double n,i;
    printf("Enter the base:\n");
    scanf("%lf",&input);
    printf("Enter the value of n:\n");
    scanf("%lf",&n);
    high = n;
    low = 0.00;

    mid=(high+low)/2;

    while(high-low>=.00000000001)
    {
        mid=(high+low)/2;

        power=1;
        power=pow(input,mid);
        if(power>n)high=mid;
        else if(power<n)low=mid;
        else if(power==n)break;
    }
    printf("The answer is %lf\n",mid);
    return 0;
}
