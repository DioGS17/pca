#include <stdio.h>
#include <stdlib.h>

int main()
{
    float metros, centimetros;

    printf("metros = ");
    scanf("%f", &metros);

    centimetros = metros * 100;

    printf("centimetros = %f", centimetros);

    return 0;
}
