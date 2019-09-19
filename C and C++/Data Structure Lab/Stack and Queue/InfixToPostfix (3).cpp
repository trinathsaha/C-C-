#include <stdio.h>
#include <string.h>
#define maxLimit 1000
int first=0,last=0,elementCount=0;
char arr[maxLimit],q[maxLimit],que[maxLimit];
int current = -1, current2 = -1;
void stackPush(char input)
{

    current++;
    arr[current]=input;

}
void stackPush2(char input)
{

    q[current2]=input;

}
void stackPop()
{
    current--;
}
void stackPop2()
{
    current2--;
}
char stackTop()
{
    return arr[current];
}

char stackTop2()
{
    return q[current2];
}
int stackEmpty()
{
    if(current<0)return 1;
    else return 0;
}
int stackEmpty2()
{
    if(current2>=0)return 0;
    else return 1;
}
void queuePush(char input)
{

    if(elementCount==0)
    {
        first=0;
        last=0;
    }
    else if(last==maxLimit && first!=0)last=0;
    elementCount++;

    que[last]=input;
    last++;


}
void queuePop()
{

    elementCount--;
    first++;
    if(first==maxLimit)first=0;
    printf("The first element has been popped.\n");

}
void queueDisplay()
{
    int i;
    if(elementCount == 0)printf("No elements to show.\n");
    else
    {
        int cnt=0;
        for(i=first; cnt<elementCount;)
        {
            if(i == maxLimit)i=0;
            cnt++;
            printf("%c",que[i]);
            i++;
        }
    }
}

main()
{
    char exp[1000];
    scanf("%s",exp);
    int i,length = strlen(exp);
    int flag = 0;
    for(i=0; i<length; i++)
    {



        if(exp[i]>='0' && exp[i]<='9' && flag==0 )
        {
            queuePush(exp[i]);
            if((exp[i+1]=='+')||(exp[i+1]=='-')||(exp[i+1]=='*')||(exp[i+1]=='/'))queuePush(',');
        }
        else
        {
            if(exp[i]=='(' ) stackPush(exp[i]);

            else if(exp[i]==')')
            {
                while(stackTop()!='(')
                {
                    queuePush(stackTop());
                    stackPop();
                }
                stackPop();
            }
            else
            {
                char u =exp[i];
                int precedence = 0;
                if((u== '+')||(u=='-') && stackEmpty()==0)precedence = 1;
                if(((u=='*')||(u=='/')) && stackEmpty()==0 && ((stackTop()=='*')||(stackTop()=='/')))precedence = 1;
                while (stackEmpty()==0 && stackTop()!='(' && precedence==1)
                {
                    queuePush(stackTop());
                    stackPop();
                }
                stackPush(exp[i]);

            }
        }
    }
    while(stackEmpty()==0)
    {

        queuePush(stackTop());
        stackPop();
    }
    queueDisplay();



    return 0;

}
