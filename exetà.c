#include <stdio.h>
int main()
{   
     int a = 20;
    printf("il tuo numero è: %d\n", a);
    if((a>18 && a<30) || (a>60 && a<100))
{
        printf("giovane e vecchio");
}
else 
{
        printf("medio");
}
}