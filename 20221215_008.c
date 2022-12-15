#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grausC, grausF;

    printf("Graus em Celsius = ");
    scanf("%f", &grausC);

    grausF = ((grausC*9/5)+32);

    printf("Graus em Fareheint = %f", grausF);

    return 0;
}
