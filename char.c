#include <stdio.h>

int main ()
{
char stringa []= "";
printf ( "scrivi una parola");
scanf ( "%s", stringa );
int i = 0;
while(stringa[i]!= '\0')
{
i++;
}
while ( i >= 0)
{
    printf ("%c", stringa[i]);
    i--;
}
printf("la parola al contrario è %c\n" , stringa[i]);
} 


    