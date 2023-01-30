#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
void quicksort(int a[],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        print(a);
        pivot = first;
        i=first,j=first;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<last)
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                temp = a[i];
                a[i] = a[i];
                a[j] = temp;
            }
            temp = a[pivot];
            a[pivot] = a[j];
            a[j] = temp;
        }
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}
int main()
{
    int a[]={99,90,89,52,50,48,45,38,33,30,27,22,15,31};
    printf("How many element enter :");
    scanf("%d",&n);
    quicksort(a,0,n-1);
    printf("\n After Quick sort :");
    print( a );
}