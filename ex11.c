#include <stdio.h>

int main()
{ 
     int a;
    scanf("%d", &a);
    printf("il tuo numero è: %d\n", a);
    if(a>1969)
    {
        printf("l'utente è nato %d anni dopo\n", a-1969);

    }
    else if (a==1969)
    {
        printf("l'utente è nato nel 1969");
    }
    else
    {
        printf("l'utente è nato %d anni prima\n", 1969-a);
    }
}