#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grausC, grausF;

    printf("Graus em Fareheint = ");
    scanf("%f", &grausF);

    grausC = (5*(grausF-32)/9);

    printf("Graus em Celsius = %f", grausC);

    return 0;
}
