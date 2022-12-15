#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, pi, area;

    printf("raio = ");
    scanf("%f", &raio);

    pi = 3.14;
    area = pi*raio*raio;

    printf("area do circulo = %f", area);

    return 0;
}
