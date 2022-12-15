#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, pesoIdeal;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    pesoIdeal = (72.7*altura) - 58;

    printf("\nO seu peso ideal deve ser %f\n", pesoIdeal);
    return 0;
}
