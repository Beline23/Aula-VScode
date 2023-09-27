// Exercicio 01 27.09.2023 (Aplicando condicionais)
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float numero;

    printf("Escreva o número desejado: ");
    scanf("%f", &numero);

    if (numero > 10) // <= Condicional
    {
        printf("É MAIOR QUE 10!");
    }
    else // <= Se a condiçao nao se confirmar entao...
    {
        printf("NÃO É MAIOR QUE 10!");

        return 0;
    }
}