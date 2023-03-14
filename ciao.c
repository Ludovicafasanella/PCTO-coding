#include <stdio.h>

int main()
{
    int eta;
    char sesso;
    printf ("qual è la tua eta? , qual è il tuo sesso?");
    scanf( "%d %c" , &eta, &sesso );
    printf ( "la mia età è %d\n , il mio sesso è %c\n" , eta, sesso);

}