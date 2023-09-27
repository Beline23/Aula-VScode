// Exercicio 01 27.09.2023 (Aplicando condicionais)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{

//Permitindo acentuaÃ§Ã£o: 

setlocale: (LC_ALL, "portuguese"); // Indicado deixar o "" vazio sem nenhum valor, pois assim ele verifica o idioma existente no dispositivo utilizado
    float numero;

    printf("Escreva o número desejado: ");
    scanf("%f", &numero);

    if (numero > 10) // <= Condicional
    {
        printf("É MAIOR QUE 10!");
    }
    else // <= Se a condiÃ§ao nao se confirmar entao...
    {
        printf("NÃO É MAIOR QUE 10!");

        return 0;
    }
}