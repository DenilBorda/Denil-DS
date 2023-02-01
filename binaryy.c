<<<<<<< HEAD
#include <stdio.h>
#define n 6
int binary_search(int a[], int val)
{
    int mid;
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
            mid = (l + h) / 2;
            if (a[mid] == val)
            {
                return mid + 1;
            }
            else if (a[mid] < val)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
    }
    return -1;
}
int main()
{
    int a[n] = {20, 30, 40, 50, 60, 70};
    int i, x;

    printf("array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nenter serach element: ");
    scanf("%d", &x);
    int search = binary_search(a, x);

    if (search == -1)
    {
        printf("element is not found");
    }
    else
    {
        printf("Element is found at position [%d] ", search);
    }
}
=======
#include<stdio.h>
#define n 5
int search(int a[],int x)
{
    int mid;
    int l;
    int h;
    while(l <=h)
    {
        mid = (l+h)/2
        if (a[mid]==val)
        {
            return mid +1;
        }
        else if(a[mid] < val)
        {
            l = mid + 1;
        }
            
    }
}
int main()
{

}
>>>>>>> 4997b258f49830820f5a0d7283db91cf01460f01
