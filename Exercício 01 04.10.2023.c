#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

int produto;
int soma;
int numero1;
int numero2; 
float media;

setlocale(LC_ALL, "portuguese");

    printf("Por gentileza digite os número desejado: ");
    scanf("%f", &numero1);
    printf("Por gentileza digite os número desejado: ");
    scanf("%f", &numero2);

    media = numero1 / numero2;
    soma = numero1 + numero2;
    produto = numero1 * numero2;

    printf("Media : %.2f. \n", media);
    printf("Soma : %.2f. \n", soma);
    printf("Produto : %.2f. \n", produto);

    return 0;
}
