#include <stdio.h>
#include <stdlib.h>

int main () {

float nota; 
float nota2;
float media;



printf("Por favor digite a sua nota: ");
    scanf("%f", &nota);

printf("Por favor digite a sua nota: ");
    scanf("%f", &nota2);

fflush(stdin); // é preciso limpar o buffer do cash para executar uma variaves de caracter apos uma variavel de numeros.

media = (nota+nota2)/2;

printf("Media : %.2f. \n", media);

return 0;
}





