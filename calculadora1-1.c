#include<stdio.h>

int main(){
    //calculado 1.1
    /*Na calculadora 1.1 sera calculado a soma e multiplicação
    do numero digitado pelo teclado*/
    int N, soma = 0, multiplicacao = 0;
    printf("Digite um numero: ");
    scanf("%d", &N);
    for(int i = 0; i <= 10; i++){
        soma = i + N;
        multiplicacao = i * N;

        printf("%2d + %2d = %2d    |   %2d * %2d = %2d\n", N, i, soma, N, i, multiplicacao);
    }

    return 0;
}