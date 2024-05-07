#include <stdio.h>

int main()
{ 
     int a;
    scanf("%d", &a);
    printf("il tuo numero è: %d\n", a);

    if(a>55)
    {
        printf("l'utente è nato prima del 1969");
        
    }
    else if (a<55)
    {
        printf("l'utente è nato dopo il 1969");
    }
        else 
        {
            printf("l'utente è nato nel 1969");
        }
    
}