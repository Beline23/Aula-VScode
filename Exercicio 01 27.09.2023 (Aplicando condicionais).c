// Exercicio 01 27.09.2023 (Aplicando condicionais)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    // Permitindo acentuação:

setlocale:
    (LC_ALL, "portuguese"); // Indicado deixar o "" vazio sem nenhum valor, pois assim ele verifica o idioma existente no dispositivo utilizado
    
    float numero;

    printf("Escreva o n�mero desejado: ");
    scanf("%f", &numero);

    if (numero == 10) // <= Condicional
    {
        printf("� igual a 10!");
    }
    
    else // <= Se a condiçao nao se confirmar entao...
    {
        if (numero > 10) 
        
        printf("� maior 10!");
        else
        {
            printf("N�o � maior que 10!");
        }
        

        return 0;
    }
}