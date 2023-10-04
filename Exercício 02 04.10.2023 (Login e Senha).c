#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>  // <== String comparator

int main() {

//Permitindo acentuaÃ§Ã£o

setlocale(LC_ALL, "portuguese");
    
 // Declarando variaveis   
    
    
    char login [200];
    char senha [200];
    char loginsalvo [200] = "Marta";
    char senhasalva [200] = "senai";

    // Solicitando dados para o Usuário.

    printf("Digite o seu login: ");
    gets(login);

    printf("Digite sua senha: ");
    gets(senha);

    /* Informação 
    
    OU - OR - || 
    E - AND - &&
    NÃO - NOT - !*/

if (strcmp(login, loginsalvo) == 0 && strcmp(senha, senhasalva) == 0) {
    printf("Bem-Vindo!");
    } else {
        printf("Acesso negado!");
    }

    return 0;


}
