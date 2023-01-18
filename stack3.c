// stack (LIFO) last in first out
#include <stdio.h>
#define n 5
int i;
int top = -1;
int insert(int a[], int val)
{
    if (top >= n - 1)`11
    {
        printf("\nstack is overflow....");
    }
    else
    {
        top++;
        a[top] = val;
    }
}
int delete(int a[])
{
    if (top < 0)
    {
        printf("\nstack is underflow....");
    }
    else
    {
        top--;
    }
}
int push(int a[], int val)
{
    if (top >= n - 1)
    {
        printf("\nstack is overflow....");
    }
    else if (top < 0)
    {
        top++;
        a[top] = val;
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
        {

            a[i] = a[i - 1];
        }
        a[0] = val;
        top++;
    }
}
int mid_push(int a[], int val)
{
    if (top >= n - 1)
    {
        printf("\nstack is overflow....");
    }
    else
    {
        for (i=n-1;i>=(n/2);i--)
        {

            a[i] = a[i - 1];
        }
        a[n / 2] = val;
        top++;
    }
}
int pop(int a[])
{
    if (top < 0)
    {
        printf("\nstack is underflow....");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        top--;
    }
}
int mid_pop(int a[])
{
    for (i = (n / 2); i < n; i++)
    {
        a[i] = a[i + 1];
    }
    top--;
}
int display(int a[])
{
    for (i = 0; i <= top; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
int main()
{
    int ch z;
    //  int 
    while(ch > 0)
    { v                                            
        cout<<"\n\t\t\t\tEnter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 1:
            insert(a[],z);            
            break;
        case 2:
            delete(a[]);            
            break;
        case 3:
            push(a[],z);            
            break;
        case 4:
            mid_push(a[],z);            
            break;
        case 5:
            pop(a[]);            
            break;
        case 6:
            mid_pop(a[]);            
            break;
        case 7:
            display();
            break;
        default:
            break;
        }
    }
}
