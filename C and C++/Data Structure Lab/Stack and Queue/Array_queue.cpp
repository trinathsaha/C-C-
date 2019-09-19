#include <stdio.h>
#define maxLimit 100
char arr[maxLimit];
int first=0,last=0,elementCount=0;
void menu()
{
    printf("\nChoose an option:\n\n");
    printf("Enter 1 to push a value in the queue.\n");
    printf("Enter 2 to pop a value from the queue.\n");
    printf("Enter 3 to show the first element on the queue.\n");
    printf("Enter 4 to display the number of elements in the queue.\n");
    printf("Enter 5 to display the elements in the queue.\n");
    printf("Enter 0 to exit.\n\n");
}
void queuePush()
{

    if(elementCount==0)
    {
        first=0;
        last=0;
    }
    else if(last==maxLimit && first!=0)last=0;
    elementCount++;
    if(elementCount>=maxLimit)
    {
        printf("The queue is full.\n");
        elementCount--;
    }
    else
    {
        char input;

        printf("Enter the value: ");
        scanf(" %c",&input);
        arr[last]=input;
        last++;
    }

}
void queuePop()
{

    if(elementCount==0)
    {
        printf("The queue is empty.\n");
    }
    else
    {
        elementCount--;
        first++;
        if(first==maxLimit)first=0;
        printf("The first element has been popped.\n");
    }
}
void queueDisplay()
{
    int i;
    if(elementCount == 0)printf("No elements to show.\n");
    else
    {
        int cnt=0;
        for(i=first;cnt<elementCount;)
        {
            if(i == maxLimit)i=0;
            cnt++;
            printf("%c\n",arr[i]);
            i++;
        }
    }
}

void queueFirst()
{
    if(elementCount==0)printf("No elements to show.\n");
    else printf("%c\n",arr[first]);
}
void queueSize()
{
    printf("The number of elements in the queue: %d\n",elementCount);
}

main()
{
    int enterValue,first=0,last=0,elementCount=0;
    menu();
    while(scanf("%d",&enterValue) && enterValue!=0)
    {
        if(enterValue==1)
        {
            queuePush();
        }
        else if(enterValue==2)
        {
            queuePop();
        }
        else if(enterValue==3)
        {
            queueFirst();
        }
        else if(enterValue==4)
        {
            queueSize();
        }
        else if(enterValue==5)
        {
            queueDisplay();
        }
        menu();
    }
    return 0;

}
