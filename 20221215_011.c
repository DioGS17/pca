#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ganhoHora, horasTrabalhadas;
    float salario, impostoRenda, inss, sindicato, salarioL;

    printf("Digite quanto voce ganha por hora: ");
    scanf("%d", &ganhoHora);

    printf("\nDigite as horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    salario = ganhoHora*horasTrabalhadas;
    impostoRenda = salario*11/100;
    inss = salario*8/100;
    sindicato = salario*5/100;
    salarioL = salario - (impostoRenda+inss+sindicato);

    printf("\nSalario bruto = %f\n", salario);
    printf("\nImposto de Renda = %f\n", impostoRenda);
    printf("\nINSS = %f\n", inss);
    printf("\nSindicato = %f\n", sindicato);
    printf("\nSalario Liquido = %f\n", salarioL);


    return 0;
}
