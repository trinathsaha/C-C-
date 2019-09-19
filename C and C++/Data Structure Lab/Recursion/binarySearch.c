#include <stdio.h>
int array[10005];
int binarySearch(int n,int high,int low)
{
    int mid=(high+low)/2;
    if(high<low)return -1;
    else if(high==low && array[mid]!=n)return -1;
    if(array[mid]==n)return mid;
    else if(array[mid]>n)return binarySearch(n,mid-1,low);
    else return binarySearch(n,high,mid+1);

}
main()
{
    int n,i,search,Sum,high,low,mid;
    printf("Enter the number of elements in the sorted array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&array[i]);

    }
    printf("Enter a number to be searched:\n");
    scanf("%d",&search);
    high=n-1;
    low=0;
    int result = binarySearch(search,high,low);
    if(result==-1)printf("Element not found.\n");
    else printf("Element found. Index = %d\n",result+1);
    return 0;

}
