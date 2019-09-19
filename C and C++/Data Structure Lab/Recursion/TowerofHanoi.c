#include <stdio.h>
#include <math.h>
void TowerofHanoi(int n,int begin,int aux,int end,int step)
{

    if(n==1)
    {
        printf("%d->%d\n",begin,end);

        return ;
    }
    else
    {

        TowerofHanoi(n-1,begin,end,aux,step);
        printf("%d->%d\n",begin,end);
        TowerofHanoi(n-1,aux,begin,end,step);
    }
}

main()
{
    int n,i;
    scanf("%d",&n);
    TowerofHanoi(n,1,2,3,0);
    return 0;

}
