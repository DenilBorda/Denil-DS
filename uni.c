#include<stdio.h>
int main()
{
    int arr[5];
    int i,d,b[5];
    for(i=0; i<5; i++)
    {
        printf("a[%d] :",i);
        scanf("%d",&arr[i]);
    }
    printf("original array\n");
    for(i=0; i<5; i++)
    {
        printf("%d",arr[i]);
    }
    d =arr[0];
    for(i=0; i<5; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[d-1] = d;
    printf("\n changed array  \n");
    for(i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
}