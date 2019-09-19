#include <stdio.h>
#include <string.h>
char string[1000],revstring[10000];
void reverse(int i,int length)
{
    if(length<0)
    {
        revstring[i]='\0';
        return;
    }
    revstring[i]=string[length];
    reverse(i+1,length-1);

}
main()
{

    int length;
    scanf("%s",string);
    length=strlen(string);
    reverse(0,length-1);
    printf("%s\n",revstring);
    return 0;


}
