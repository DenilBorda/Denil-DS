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
        printf ("\n Queue is Empty");
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
int rear(int a[], int val)
{
    if (r < 0)
    {
        printf("\nQueue is Empty....");
    }
    else if (f == r)
    {
       f = r = -1;
    }
    else
    {
        --r;
    }
}
int front(int a[] , int val)
{
    if (f < 0)
    {
        printf("\n Queue is Empty....");
    }
    else if(f == -1)
    {
       f = r = 0;
       a[f] = val;
    }
    else
    {
        a[--f] = val; 
    }
}
int display(int a[])
{
    for (i = f; i <= r; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}  
int main()
{
    int a[n];
    insert(a,10);
    insert(a,20);
    insert(a,30);
    insert(a,40);
    insert(a,50);
    display(a);
    delete(a);
    delete(a);
    delete(a);
    display(a);
}

