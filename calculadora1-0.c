#include<stdio.h>

int main(){
    //calculado 1.0
    /*Na calculadora 1.0 sera calculado somenta a soma
    do numero digitado pelo teclado*/
    int N, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &N);
    for(int i = 0; i <= 10; i++){
        soma = i + N;
        printf("%d + %d = %d\n", N, i, soma);
    }
    return 0;
}
