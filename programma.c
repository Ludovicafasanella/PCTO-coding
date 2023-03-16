#include <stdio.h>

int main()
{
    char stringa []= "";
printf ( "scrivi una parola\n");
scanf ( "%s", stringa );
int i = 0;

while(stringa [i] != '\0')
{
    i++;
}
printf("la parole %s è lunga %d caratteri", stringa, i);
}