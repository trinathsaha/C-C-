#include <stdio.h>
#define maxLimit 1000
char arr[maxLimit];
int current;
void menu()
{
    printf("\nChoose an option:\n\n");
    printf("Enter 1 to push a value in the stack.\n");
    printf("Enter 2 to pop a value from the stack.\n");
    printf("Enter 3 to show the element on the top of the stack.\n");
    printf("Enter 4 to display the stack size.\n");
    printf("Enter 5 to display the stack elements.\n");
    printf("Enter 0 to exit.\n\n");
}
void stackPush()
{
    current++;
    if(current>=maxLimit)
    {
        printf("The stack is full.\n");
    }
    else
    {
        char input;
        printf("Enter the value: ");
        scanf(" %c",&input);
        arr[current]=input;
    }
}
void stackPop()
{

    if(current<0)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        current--;
        printf("The top element has been popped.\n");
    }
}
void stackTop()
{
    if(current<0)printf("No elements to show.\n");
    else printf("%c\n",arr[current]);
}
void stackSize()
{
    printf("The number of elements in the stack: %d\n",current);
}
void stackDisplay()
{
    int i;
    if(current<0)printf("No elements to show.\n");
    else{
        for(i=current;i>=0;i--)
            printf("%c\n",arr[i]);
    }
}
main()
{
    int enterValue,current=-1;
    menu();
    while(scanf("%d",&enterValue) && enterValue!=0)
    {
        if(enterValue==1)
        {
            stackPush();
        }
        else if(enterValue==2)
        {
            stackPop();
        }
        else if(enterValue==3)
        {
            stackTop();
        }
        else if(enterValue==4)
        {
            stackSize();
        }
        else if(enterValue==5)
        {
            stackDisplay();
        }
        menu();
    }
    return 0;

}
