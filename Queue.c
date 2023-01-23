#include<stdio.h>
#define n 5
int i;
int f = -1;
int r = -1;
void insert(int a[],int val)
{ 
    if(r>=n-1)
    {
        printf("Queue Is Full");
    }
    else if(r<0)
    {
        ++f;
        a[++r]=val;
    }
    else
    {
        a[++r]=val;
    }
}
void delete(int a[])
{
   if(f<0)
    {   
        printf ("Queue is Empty");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        ++f;
    } 
}
int display(int a[])
{
    for(i=f; i<=r;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[n];
    insert(10,a);
    insert(20,a);
    insert(30,a);
    insert(40,a);
    display(a);
    delete(a);
    display(a);
}