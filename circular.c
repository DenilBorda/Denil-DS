#include<stdio.h>
#define n 5
int f = -1;
int r = -1;
int a[n];
int i,val;
void insert()
{
    printf("\n Enter Value For Insert :");
    scanf("%d",&val);
    if((r+1)%n==f)
    {
        printf("Circular Queue Is Full");   
    }
    else if(f == -1)
    {
        f = r = 0;
        a[r] = val;
    }
    else 
    {
        r = (r+1)%n;
        a[r]=val;
    }
}
void delete()
{
    if(f < 0)
    {
        printf("Circular Queue is Empty");
    }
    else if(f == r)
    {
        f = r =-1;
    }
    else
    {
        f = (f + 1)%n;
    }
}
int display()
{
    printf("\n");
    i = f;
    if(f < 0)
    {
        printf("\n Circular Queue is Empty");
    }
    else
    {
        do
        {
            printf(" \n %d", a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n 1.insert \n 2.delete \n 3.display \n 0.Exit");
        printf("\n Enter YOur Choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 0:
            break;
        default:
            printf("\n Wrong Choice");
        }

    } while (ch != 0);
}

