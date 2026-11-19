/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    float largura, comprimento, valorCaixa;
    float area, quantidadeCaixas, custoTotal;
    
    printf("Qual e a largura da area (em metros)? ");
    scanf("%f", &largura);

    printf("Qual e o comprimento da area (em metros)? ");
    scanf("%f", &comprimento);

    printf("Qual e o valor de cada caixa? ");
    scanf("%f", &valorCaixa);

    // Calcula a área total
    area = largura * comprimento;

    // Cada caixa cobre 2,5 m²
    // ceil() arredonda para cima, garantindo caixas inteiras
    quantidadeCaixas = ceil(area / 2.5);

    // Calcula o custo total
    custoTotal = quantidadeCaixas * valorCaixa;

    printf("\nArea total a ser revestida: %.2f m^2\n", area);
    printf("Quantidade de caixas necessarias: %.0f\n", quantidadeCaixas);
    printf("Custo total da compra: R$ %.2f\n", custoTotal);

    return 0;
}