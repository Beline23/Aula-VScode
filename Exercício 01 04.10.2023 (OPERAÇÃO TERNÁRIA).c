#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

int produto;
int soma;
int numero1;
int numero2;
int maior;
int menor; 
float media;

setlocale(LC_ALL, "portuguese");

    printf("Por gentileza digite os número desejado: ");
    scanf("%i", &numero1);
    printf("Por gentileza digite os número desejado: ");
    scanf("%i", &numero2);

    media = numero1 + numero2 / 2;
    soma = numero1 + numero2;
    produto = numero1 * numero2;

// Operação Ternária

//            Pertunta  Sim   Não
          
    maior = numero1 > numero2 ? numero1 : numero2;
    menor = numero1 < numero2 ? numero1 : numero2;


/*   ALTERNATIVA => pode ser feiito por if e else, porem é mais trabalhoso.
if (nuemro1 > numero 2) {
    maior = numero1;
    menor = numero2;
} else {
    maior = numero2
    menor = numero1
}



*/
    printf("Media : %.2f. \n", media);
    printf("Soma : %.2i. \n", soma);
    printf("Produto : %.2i. \n", produto);
    printf("Maior: %.2i. \n", maior);
    printf("Menor: %.2i. \n", menor);

    return 0;
}
