#include<stdio.h>
#define n 5
int i;
int top =-1;
int display(int a[])
{
    for(i = 0; i<=top; i++)
    {
        printf("%d ",a[i]);
        // printf("\n");
    }
}

int insert(int a[], int val)
{
    if(top<=n)
        printf("Array Is OverFlow....\n");
        else
    {
        ++top;
        a[top] = val;
    }
}
int delete(int a[])
{
    if(top<0)
    {
        printf("Array Is UnderFlow....\n");
    }
        else     
        {
            --top;
        }
}
int push()
{
    for(i=n-1; i>=; i++)
    {

    }
        a[i] = a[n+1]
}
int main()
{
    int a[n];
    insert(a,10);
    // insert(a,20);
    // insert(a,30);
    // insert(a,40);
    // insert(a,50);
    delete(a);
    display(a);
}