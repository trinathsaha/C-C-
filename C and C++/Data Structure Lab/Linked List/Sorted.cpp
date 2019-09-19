//Nahian Ashraf, Roll - 02

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int Value;
    struct Node *Next;
};

struct Node *Head=NULL, *LL, *Temp;

void Create_A_Node(int V)
{
    Temp = (struct Node *)malloc(sizeof(struct Node));

    if(!Temp)
    {
        printf("Something Wrong with Node Creation\n");
        exit(0);
    }
    else
    {
        Temp->Value = V;
        Temp->Next = NULL;
    }
}


int U,V;
void Menu()
{
    printf("\n Enter a value into the sorted linked List\n");
}

void sortLL()
{
    if(Head==NULL)
    {

        Create_A_Node(U);
        Head=Temp;

    }
    else
    {

        LL=Head;
        if(Head->Value>=U)
        {
            Create_A_Node(U);
            Temp->Next=Head;
            Head=Temp;
        }
        else if(Head->Next==NULL)
        {
            Create_A_Node(U);
            Head->Next=Temp;
        }
        else

        {

            while(LL->Next!=NULL)
            {
                if(LL->Value<=U && LL->Next->Value>U)break;
                LL=LL->Next;
            }

            Create_A_Node(U);
            Temp->Next=LL->Next;
            LL->Next=Temp;
        }

    }

}
void show ()
{
    LL=Head;
    printf("\n\nThe current elements of the Linked List: \n");
    while(LL!=NULL)
    {
        printf("%d ",LL->Value);
        LL=LL->Next;
    }
    printf("\n");

}


main()
{
    int Choice;
    Menu();
    while(scanf("%d",&U)!=EOF)
    {


        sortLL();
        show();
        Menu();

    }

}
