/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int quantidade;
    int i;
    float nota;
    float soma = 0;
    float media;

    printf("Quantidade de alunos: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++)
    {
        printf("Nota %d: ", i);
        scanf("%f", &nota);

        while (nota < 0 || nota > 10)
        {
            printf("Nota invalida!\n");
            printf("Digite novamente: ");
            scanf("%f", &nota);
        }

        soma = soma + nota;
    }

    media = soma / quantidade;

    printf("\nMedia da turma: %.2f\n", media);

    return 0;
}