#include <stdio.h> 

int main ()
{
    int lunghezza;
    int lunghezza2;
    int lunghezza3;

    printf("inserisci un numero\n");
    scanf("%d", &lunghezza );

    printf("inserisci un secondo numero\n");
    scanf("%d", &lunghezza2);

    printf("inserisci un terzo numero\n");
    scanf( "%d", &lunghezza3);

if ( lunghezza+ lunghezza2> lunghezza3 && lunghezza+ lunghezza3 > lunghezza2 && lunghezza2+ lunghezza3 > lunghezza)
{  
    printf( "è un triangolo\n");
}
else
{
    printf( "non è un triangolo\n" );
}
}