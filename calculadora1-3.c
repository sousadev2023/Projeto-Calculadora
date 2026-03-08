#include<stdio.h>

int main(){
    //calculado 1.3
    /*Na calculadora 1.3 sera calculado a soma, multiplicação, subtracão e divisão.
    do numero digitado pelo teclado*/
    int N, soma = 0, multiplicacao = 0, subtracao, divisao = 0;
    printf("Digite um numero: ");
    scanf("%d", &N);
    getchar();
    printf("    Adicao      -    Multiplicacao  -   Subtracao    -     Divisao\n\n");
    for(int i = 0; i <= 10; i++){
        soma = i + N;
        multiplicacao = i * N;
        subtracao = i - N;
        divisao = (i * N) / N;

        printf("%2d + %2d = %2d    |   %2d * %2d = %2d    |  %2d - %2d = %2d  |  %2d / %2d = %2d\n", N, i, soma, N, i, multiplicacao, i + N, N, subtracao + N, i * N, N, divisao);
    }

    return 0;
}