#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    float num3, op1, op2, op3;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num2);

    printf("\nDigite um numero real: ");
    scanf("%f", &num3);

    op1 = (2*num1)*(num2/2);
    op2 = (3*num1) + num3;
    op3 = num3*num3*num3;

    printf("\nop1 = %f\n", op1);
    printf("\nop2 = %f\n", op2);
    printf("\nop3 = %f\n", op3);
    return 0;
}
