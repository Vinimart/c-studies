// Aula sobre variáveis
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarando e inicializando variáveis:
    // Declaração
    int age = 23;

    // Função responsável por escrever na saída padrão
    printf("What is your age?\n");

    // Input de dados
    // A função recebe como argumento uma string "%d" que se refere ao tipo da variável target.
    scanf("%d", &age);

    // Saída
    printf("Your age is %d\n", age);

    return 0;
}

// Aula sobre compilador:
// Compilação via terminal: gcc nome-do-arquivo.c -o nome-de-saida.exe