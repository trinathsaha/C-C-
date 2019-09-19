#include <stdio.h>
#include <malloc.h>
#define maxLimit 100

int elementCount=0;
struct node
{
    char value;
    struct node* next;
}*head,*temp;
struct node *current = NULL;
struct node* create_node()
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    return temp;
}
void menu()
{
    printf("\nChoose an option:\n\n");
    printf("Enter 1 to push a value in the queue.\n");
    printf("Enter 2 to pop a value from the queue.\n");
    printf("Enter 3 to show the first element of the queue.\n");
    printf("Enter 4 to display the queue size.\n");
    printf("Enter 5 to display the elements in the queue.\n");
    printf("Enter 0 to exit.\n\n");
}
void queuePush()
{

    elementCount++;

    if(elementCount==maxLimit)
    {
        printf("The queue is full.\n");
        elementCount--;
    }
    else
    {

        char input;
        temp = create_node();
        printf("Enter the value: ");
        scanf(" %c",&input);
        temp->value = input;
        if(elementCount==1 )
        {
            head = temp;
            current = head;
            current->next= NULL;
        }
        else
        {
            current->next = temp;
            current = current->next;
            current->next= NULL;
        }
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
        temp = head;
        head = head ->next;
        free(temp);

        elementCount--;
    }


}
void queueDisplay()
{
    int i;
    if(elementCount==0)printf("No elements to show.\n");
    else{
        temp = head;
        while(temp!=NULL)
        {
            printf("%c\n",temp->value);
            temp= temp->next;
        }
    }
}
void queueFirst()
{
    if(elementCount==0)printf("No elements to show.\n");
    else printf("%c\n",head->value);
}
void queueSize()
{
    printf("The number of elements in the queue: %d\n",elementCount);
}

main()
{
    int enterValue;
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
