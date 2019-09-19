#include <stdio.h>
#include <malloc.h>
#define maxLimit 100

int elementCount=0;
struct node
{
    char value;
    struct node* next;
}*head,*temp;
struct node *current;
struct node* create_node()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    return temp;
}
void menu()
{
    printf("\nChoose an option:\n\n");
    printf("Enter 1 to push a value in the stack.\n");
    printf("Enter 2 to pop a value from the stack.\n");
    printf("Enter 3 to show the element on the top of the stack.\n");
    printf("Enter 4 to display the stack size.\n");
    printf("Enter 5 to display the elements in the stack.\n");
    printf("Enter 0 to exit.\n\n");
}
void stackPush()
{

    elementCount++;
    if(elementCount==1)
    {
        head = create_node();
        head->next = NULL;
        char input;
        printf("Enter the value: ");
        scanf(" %c",&head->value);
        current = head;
    }
    else if(elementCount==maxLimit)
    {
         printf("The stack is full.\n");
         elementCount--;
    }
    else
    {
        temp = create_node();
        current->next = temp;
        current= current -> next;
        printf("Enter the value: ");
        scanf(" %c",&current->value);
        current->next=NULL;
    }

}
void stackPop()
{

    if(elementCount==0)
    {
        printf("The queue is empty.\n");
    }
    else
    {
        struct node *route = head;
        if(elementCount==1)
        {
            free(current);

        }
        else
        {
            while(route->next->next!=NULL)
            {
                route = route->next;
            }
            route ->next= NULL;
            free(current);
            current = route;

        }
        elementCount--;
    }


}
void stackTop()
{
    if(elementCount==0)printf("No elements to show.\n");
    else printf("%c\n",current->value);
}
void stackSize()
{
    printf("The number of elements in the queue: %d\n",elementCount);
}
void stackDisplay()
{
    int i;
    int pseudoElementCount=elementCount;
    if(elementCount==0)printf("No elements to show.\n");
    else{
        while(pseudoElementCount!=0)
        {
            temp = head;
            int cnt = 1;
            while(pseudoElementCount!=cnt)
            {

                temp=temp->next;
                cnt++;
            }
            printf("%c\n",temp->value);
            pseudoElementCount--;
        }
    }
}
main()
{
    int enterValue;
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
