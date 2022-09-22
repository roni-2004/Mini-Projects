#include <stdio.h>
int main()
{
    int U,V;
    int a;
    printf(" ");
    scanf("%2d%2d", &U,&V);
    a = U*V/2+((U%2)*(V%2));
    printf("%d\n",a);
}