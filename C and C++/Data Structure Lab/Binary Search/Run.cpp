//Nahian Ashraf, Roll - 02

#include <stdio.h>

main()
{
    double input,answer,high,low,mid,x,y,t;

    high = 2000;
    low = 0.00;
    mid=(high+low)/2;

    while(1)
    {
        mid=(high+low)/2;
        t=mid/100;
        x=t*60;
        if(mid+x == 2000)break;
        else if(mid+x>2000)high=mid;
        else low=mid;
    }
    printf("x = %lf y = %lf t = %lf\n",mid,x,t);
    return 0;
}
