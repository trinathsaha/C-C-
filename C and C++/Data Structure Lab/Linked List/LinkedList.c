//Nahian Ashraf, Roll - 02

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int Value;
    struct Node *Next;
};

struct Node *Head, *LL, *Temp,*head2;

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

void Free_A_Node(struct Node *A_Node)
{
    free(A_Node);
}
int U,V;
void Menu()
{
    printf("\n 1. Create a Linked List");
    printf("\n 2. Insert a Value into a Linked List (at the end)");
    printf("\n 3. Insert a value into a Linked List (after a specific value)");
    printf("\n 4. Insert a value into a Linked List (before a specific value)");
    printf("\n 5. Update a value with another value");
    printf("\n 6. Delete a value from the Linked List");
    printf("\n 7. Delete a value which is before a specific value");
    printf("\n 8. Delete a value which is after a specific value");
    printf("\n 9. Print the Linked List");
    printf("\n10. Print the Linked List in Reverse Order");
    printf("\n11. Insert multiple values into the Linked List");
    printf("\nEnter your Choice : (1-11, 0 to exit):");
}

void Option1()
{
    int V;
    printf("You have selection Option1\n");


    if(Head==NULL) // That is, the Linked list is yet to create
    {
        printf("Enter an integer to create the Linked List ; ");
        scanf("%d",&V);
        Create_A_Node(V); // Calling this function with V and the new Node will be created as Temp;
        Head = Temp;	// Now the Head will Point to the Temp;
        printf("The Linked List is Created\n");
    }
    else
    {
        printf("The Linked List is already created\n");
    }

}

void Option2()
{
    int V;
    printf("You have selection Option2 (Insert a value into a Linked List (at the end))\n");

    LL = Head;

    printf("Enter an integer to insert into the Linked List ; ");
    scanf("%d",&V);

    if(LL==NULL)
    {
        printf("There is No Linked List. So, the Linked list will be created First\n");
        Create_A_Node(V); // Calling this function with V and the new Node will be created as Temp;
        Head = Temp;	// Now the Head will Point to the Temp;
    }
    else
    {
        while(LL->Next) // LL will traverse till the end of the Linked List or the Node that has Null in it's Next
        {
            LL = LL->Next;
        }

        Create_A_Node(V); // Calling this function with V and the new Node will be created as Temp;
        LL->Next = Temp; // That newly created node will be added to the end of the linked list (as the LL is now at the last node after traversing Linked List
        printf("Data Inserted at the end of the Linked List\n");
    }

}

void Option3()
{
    printf("You have selection Option3 (Insert a value into a Linked List (after a specific value))\n");
    LL = Head;

    printf("Enter an integer to insert into the Linked List ; ");
    scanf("%d",&V);

    if(LL==NULL)
    {
        printf("There is No Linked List. So, the Linked list will be created First\n");
        Create_A_Node(V); // Calling this function with V and the new Node will be created as Temp;
        Head = Temp;	// Now the Head will Point to the Temp;
    }
    else
    {
        printf("Enter the value after which a value will be  insert into the Linked List ; ");
        scanf("%d",&U);
        int found=0;
        LL =Head;
        while(LL!=NULL)
        {
                if(LL->Value==U) {
                 Create_A_Node(V);
                 Temp->Next=LL->Next;
                 LL->Next = Temp;
                 found = 1;
                 break;
            }
             LL=LL->Next;
        }

        if(found == 0) printf("Value not found");
    }
}

void Option4()
{
    printf("You have selection Option4 (Insert a value into a Linked List (before a specific value))\n");

    printf("Enter an integer to insert into the Linked List ; ");
    scanf("%d",&V);

    if(Head == NULL)
    {
        printf("There is No Linked List. So, the Linked list will be created First\n");
        Create_A_Node(V); // Calling this function with V and the new Node will be created as Temp;
        Head = Temp;	// Now the Head will Point to the Temp;
    }
    else
    {

        printf("Enter the value before which a value will be  insert into the Linked List ; ");
        scanf("%d",&U);
        int found =0;
        LL = Head;
        if(Head->Value == U)
        {
            found = 1;
            Create_A_Node(V);
            Temp->Next = Head;
            Head = Temp;
        }
        else
        {
            while(LL != NULL || LL->Next != NULL)
            {
                if(LL->Next->Value == U)
                {
                    found = 1;
                    Create_A_Node(V);
                    Temp->Next = LL->Next;
                    LL->Next = Temp;
                    break;
                }
                LL = LL->Next;
            }
        }
        if(found == 0)
        {
            printf("The element is not present in the linnked list.\n");
        }
    }


}

void Option5()
{
    printf("You have selection Option5 (Update a value with another value)\n");

   // printf("head = %d\n",Head->Value);
    if(Head == NULL)
    {
        printf("There is No Linked List.\n");

    }
    else
    {
        printf("Enter the current value to replace in the Linked List ; ");
        scanf("%d",&U);
        int found = 0;
        LL=Head;
        while(LL != NULL)
        {

            if(LL->Value==U) {
            found=1;
            printf("Enter an integer to update the Linked List ; ");
            scanf("%d",&V);
            LL->Value = V;
            printf("Data replaced.\n");
             break;
            }
             LL= LL->Next;
        }

    }
}

void Option6()
{
    printf("You have selection Option6\n");
    int found = 0;
    LL= Head;
    if(LL==NULL)
    {
        printf("There is No Linked List.\n");

    }
    else
    {
        printf("Enter the value to delete from the Linked List ; ");
        scanf("%d",&U);
        if(Head->Value == U)
        {
            Head = Head->Next;
        }
        else{
            while(LL != NULL || LL->Next != NULL)
            {
                if(LL->Next->Value == U) {
                    found = 1;
                    break;
                }
                LL = LL->Next;
            }
        }

        if(found==1)
        {

            Temp= LL -> Next;
            LL->Next= LL->Next -> Next;
            Free_A_Node(Temp);
            printf("Data deleted.\n");
        }
        else printf("Value not found.\n");
    }
}

void Option7()
{
    printf("You have selection Option7 (Delete a value which is before a specific value) \n");
    int found = 0;
    LL= Head;
    if(LL==NULL)
    {
        printf("There is No Linked List.\n");

    }
    else
    {
        printf("Enter the value after the one value which must be deleted from the Linked List ; ");
        scanf("%d",&U);

        LL= Head;
        if(Head->Value == U)
        {
            printf("There is nothing before head\n");
        }
        else if(Head->Next->Value == U)
        {
            Head = Head->Next;
        }
        else {
        while(LL->Next->Next->Value!=U || LL != NULL || LL->Next != NULL || LL->Next->Next != NULL)
        {
            if(LL->Next->Next->Value == U) {
                    found=1;
                    break;
            }
            LL=LL->Next;
        }
        if(found==1)
        {
            Temp= LL -> Next;
            LL->Next= LL->Next -> Next;
            Free_A_Node(Temp);

            printf("Data deleted.\n");
        }
        else printf("No value found\n");
        }
    }

}

void Option8()
{
    printf("You have selection Option8 (Delete a value which is after a specific value)\n");
    int found =0;
    printf("Enter the value  to be matched from the Linked List ; ");
    scanf("%d",&U);

    LL= Head;
    if(Head == NULL)
    {
        printf("There is nothing in the linked list\n");
    }
    else {
    while(LL->Value!=U || LL != NULL)
    {

        if(LL->Value==U) {
            found=1;
            break;
        }
          LL=LL->Next;
    }
    if(found==1 && LL-> Next != NULL)
    {
        Temp= LL -> Next;
        LL->Next= LL->Next -> Next;
        Free_A_Node(Temp);
        printf("Data deleted.\n");
    }
    else printf("No value found.\n");
    }
}

void Option9()
{

    LL = Head;
    while(LL!=NULL) // Or you can write while(LL)
    {
        printf("%d\n",LL->Value);
        LL= LL->Next;
    }

}

void Option10()
{
    printf("You have selection Option10 (Print the Linked List in Reverse Order)\n");
    LL = Head;
    int cnt=0;
    if(LL==NULL)return;
    while(LL->Next!=NULL)
    {
        LL= LL->Next;
        cnt++;
    }
    printf("%d\n",LL->Value);

    while(cnt!=0)
    {
        LL=Head;
        int i;
        for(i=1; i<cnt; i++)
        {

            LL=LL->Next;
        }
        printf("%d\n",LL->Value);
        cnt--;
    }
}
void Option11()
{
    printf("First select how many inputs you want to give at once.: ");
    int n,i;
    scanf("%d",&n);
    printf("Now give the inputs: \n");
    int V,m;
    LL =Head;
    for(i = 1; i <= n; i++)
    {
        scanf("%d",&V);
        Create_A_Node(V);
        if(LL==NULL)
        {
            Head = Temp;
            LL= Head;
        }
        else {

            while(LL->Next!=NULL)
            {
                LL=LL->Next;
            }
            LL->Next=Temp;
        }

    }




}
void SelectOptions(int Ch)
{
    if(Ch==1)	    Option1();
    else if(Ch==2)  Option2();
    else if(Ch==3)  Option3();
    else if(Ch==4)  Option4();
    else if(Ch==5)  Option5();
    else if(Ch==6)  Option6();
    else if(Ch==7)  Option7();
    else if(Ch==8)  Option8();
    else if(Ch==9)  Option9();
    else if(Ch==10) Option10();
    else if(Ch==11) Option11();
}

main()
{
    int Choice;
    while(1)
    {
        Menu();
        scanf("%d", &Choice);
        if(Choice==0)
            break;
        else if(Choice<0 || Choice>11)
            printf("Wrong input\n");
        else
            SelectOptions(Choice);
    }

}
