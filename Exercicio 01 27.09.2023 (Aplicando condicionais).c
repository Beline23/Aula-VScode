// Exercicio 01 27.09.2023 (Aplicando condicionais)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Informação => 
// == Sinal de equivalencia
// "= Sinal para diferente
// = atribuição

int main()
{

    // Permitindo acentuaÃ§Ã£o:

setlocale(LC_ALL, "portuguese"); // Indicado deixar o "" vazio sem nenhum valor, pois assim ele verifica o idioma existente no dispositivo utilizado
    
    float numero;

    printf("Escreva o número desejado: ");
    scanf("%f", &numero);

    if (numero == 10) // <= Condicional
    {
        printf("É igual a 10!");
    }
    
    else // <= Se a condiÃ§ao nao se confirmar entao...
    {
        if (numero > 10) 
        
        printf("É maior 10!");
        else
        {
            printf("Não é maior que 10!");
        }
        

        return 0;
    }
}

               // Estrurura IF else IF

// if (numero == 10) {
// printf("O NÚMERO É IGUAL A 10!");
// else if (numero > 10)
// printf("O NÚMERO É MAIOR QUE 10!")
// else (numero < 10)
// printf("O NÚMERO É MENOR QUE 10!")
