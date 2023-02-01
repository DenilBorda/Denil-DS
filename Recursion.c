#include<stdio.h>
int fun(int i)
{
    printf("Before Function Called: %d\n",i);
    if(i<=3)
        fun(++i);
        else
        return 0;
        printf("After Function Called: %d\n",i);
}
int main()
{
    printf("Hello......\n");
    fun(1);
    printf("Hiiiii..........");
}
