//Nahian Ashraf, Roll - 02

#include <stdio.h>

main()
{
    double input,answer,high,low,mid;
    printf("Enter a number to determine its square root.\n")
    scanf("%lf",&input);

    high = input;
    low = 0.00;
    mid=(high+low)/2;

    while(high-low>=0.0000001)
    {
        mid=(high+low)/2;
        if(mid*mid>input)high=mid;
        else if(mid*mid<input)low=mid;
        else break;
    }
    printf("The root is %lf\n",mid);
    return 0;
}
