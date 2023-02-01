#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    printf("random: %d\n",rand()%87);
    //printf("random: %d\n",rand()%87);

    printf("ceil:%2f\n",ceil(3.3));
    printf("ceil:%2f\n",ceil(15.6));

    printf("abs:%d\n",abs(-18));
    printf("abs:%d\n",abs(19));

    printf("sqrt:%f\n",sqrt(36));
    printf("sqrt:%f\n",sqrt(64));

    printf("pow:%2f\n",pow(2,5));
    printf("pow:%2f\n",pow(10,5));
    
    printf("floor:%2f\n",floor(4.5));
    printf("floor:%2f\n",floor(5.7));
    
    printf("round:%f\n",round(3.6));
    printf("round:%2f\n",round(3.3));

}


