//Nahian Ashraf, Roll - 02

#include <stdio.h>

main()
{
    double input,answer,high,low,mid,dis,x,y,t,v1,v2;
    printf("Enter the distance between people.\n");
    scanf("%lf",&dis);
    printf("Enter the velocity of the second person.\n");
    scanf("%lf",&v1);
    printf("Enter the velocity of the 2nd person.\n");
    scanf("%lf",&v2);

    high = dis;
    low = 0.00;
    mid=(high+low)/2;

    while(1)
    {
        mid=(high+low)/2;
        t=mid/v1;
        x=t*v2;
        if(mid+x == dis)break;
        else if(mid+x>dis)high=mid;
        else low=mid;
    }
    printf("x = %lf y = %lf t = %lf\n",mid,x,t);
    return 0;
}
