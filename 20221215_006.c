#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ganhoHora, horasTrabalhadas, salario;

    printf("Digite quanto voce ganha por hora: ");
    scanf("%d", &ganhoHora);

    printf("Digite as horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    salario = ganhoHora*horasTrabalhadas;

    printf("Salario = %d", salario);

    return 0;
}
