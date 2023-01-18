#include<stdio.h>
int main()
{
    int a = 1, b = 2, c = 3, d;
    d = a && --b && ++c;
    printf("a: %d\tb: %d\tc: %d\td: ",a,b,c,d); 
}
