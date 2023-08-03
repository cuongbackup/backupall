/*ar_ops.c Arithmetic operators Demo.*/
#include <stdio.h>
int main()
{   int n=30, m= 7, t, k;
    t= --m;
    printf("Prefix decreasing operator: t=%d, m=%d\n", t, m);
    k= m--;
    printf("Postfix decreasing operator: k=%d, m=%d\n", k, m);
    getchar();
    return 0;
}