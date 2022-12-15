#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, area, dobroA;

    printf("Digite um numero:");
    scanf("%d", &num);

    area = num*num;

    dobroA = area*2;

    printf("Dobro da area = %d", dobroA);

    return 0;
}
