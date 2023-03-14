#include <stdio.h>

int main ()
{
char sesso;
    printf( "qual è il tuo sesso?");
    scanf("%c" , &sesso);

    if (sesso=='m')
    {
        printf("sei maschio\n");
    }
    else if(sesso== 'f')
    {
        printf("sei femmina\n");
    }
    else if (sesso=='n')
    {
        printf( "sei non identificato\n");
    }
    else
    {
        printf("ërrore\n");
    }
}




