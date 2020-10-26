// Aula sobre variáveis
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    // Declarando e inicializando variáveis:
    // Declaração
    int age = 23;

    // Função responsável por escrever na saída padrão
    printf("What is your age? ");

    // Input de dados
    scanf("%d", &age);

    // Saída
    printf("Your age is %d", age);

    return 0;
}
