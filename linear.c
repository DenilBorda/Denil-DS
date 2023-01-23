// #include<stdio.h>
// int a={12,13,14,15,16};
// int i;
// int search()
// {
//     for(i=0; i<5; i++)
//     {
//         printf("a[%d] :",i);
//     }

// }
// int main()
// {
//     search();
// }
#include <stdio.h>
#define n 5
int search(int a[],int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i+1;
    }
    return -1;
}

int main()
{
    int a[] = {10,20,30,40,50};
    int x=50;
    int index = search(a,x);
        if (index>0)
        {
        printf("at position %d",index);
        }
        else 
        printf("not found");
        // printf("\nindex is present %d",index);
}
