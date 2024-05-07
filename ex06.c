#include <stdio.h>
int main()
{ int a, b;
scanf("%d", &a);
scanf("%d", &b);
printf("il tuo numero è: %d\n", a);
printf("il tuo numero è: %d\n", b);
    if(a>b)
    {
printf("a è > di b");
    }
    else if (a==b)
    {
        printf("a è uguale a b");
    }
     else
    {
        printf("a è < di b");

    }
}
