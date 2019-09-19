#include <stdio.h>
#include <string.h>
int Palindrome(char string[10001],int i,int length)
{
    if(((length==i)||(length==i+1)) && string[i]==string[length])return 1;
    if(string[i]!=string[length])return 0;
    return Palindrome(string,i+1,length-1);

}
main()
{
    int length,i=0,answer;
    char string[10001];
    scanf("%s",string);
    length=strlen(string);
    answer=Palindrome(string,i,length-1);
    if(answer==1)printf("Palindrome.\n");
    else printf("Not palindrome.\n");
    return 0;
}
