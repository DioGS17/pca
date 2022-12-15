#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma;
    printf("Digite dois numeros para somar: ");
    scanf("%d %d", &a, &b);

    soma = a + b;

    printf("Soma = %d", soma);

    return 0;
}
