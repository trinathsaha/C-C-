#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int Value;
    struct Node *Next;
};

struct Node *Head=NULL, *LL,*LLI, *Temp;

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


int U,V,n,k,i;
void Menu()
{
    printf("\n Enter the number of people.\n");
    scanf("%d",&n);
    printf("\n Enter the value of k.\n");
    scanf("%d",&k);

    for(i=1;i<=n;i++)
    {
        Create_A_Node(i);
        if(i==1)
        {
            Head=Temp;
            LL=Head;
        }
        else
        {
            LL->Next=Temp;
            LL=LL->Next;
        }

    }
    LL->Next=Head;

}
void show ()
{
    LLI=Head;
    printf("\n\nThe current elements of the Linked List: \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",LLI->Value);
        LLI=LLI->Next;
    }
    printf("\n");

}
void deleteFromLL()
{
    while(n>1)
    {
        int cnt=0;
        while(cnt<k)
        {
            cnt++;
            LL=LL->Next;
        }
        Temp=LL->Next;
        if(LL->Next==Head)Head=LL->Next->Next;
        LL->Next=LL->Next->Next;
        free(Temp);
        n--;
        show();
    }


}



main()
{
   Menu();
   show();
   deleteFromLL();


}
