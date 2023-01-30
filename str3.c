#include<stdio.h>
//#include<string.h>
int main()
{
    char str[50];
     printf("\n enter a string  : ");
     scanf("%[^\n]s",&str);
    printf("your string is=%s",str); 
     int i;
     for (i=0; str[i]!='\0'; i++);
     printf("\n string len:%d",&i);
         
}