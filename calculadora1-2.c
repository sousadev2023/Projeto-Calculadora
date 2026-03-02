#include<stdio.h>

int main(){
    //calculadora 1.2
    /*Na calculadora 1.2 sera calculado a soma, multiplicação e subtração
    do numero digitado pelo teclado*/
    int N, soma = 0, multiplicacao = 0, subtracao = 0;
    printf("Digite um numero: ");
    scanf("%d", &N);
    for(int i = 0; i <= 10; i++){
        soma = i + N;
        multiplicacao = i * N;
        subtracao = i - N;

        printf("%2d + %2d = %2d    |   %2d * %2d = %2d  |  %2d - %2d = %2d\n", N, i, soma, N, i, multiplicacao, i + N, N, subtracao + N);
    }

    return 0;
}