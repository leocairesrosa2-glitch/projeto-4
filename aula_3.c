/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {
    const double PI = 3.14159;
    double raio, perimetro;

    printf("Digite o raio da peça em centímetros: ");
    scanf("%lf", &raio);

    perimetro = 2 * PI * raio;

    printf("Perímetro da circunferência: %.2f cm\n", perimetro);

    return 0;
}

