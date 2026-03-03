#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    // calculado 1.1
    /*Na calculadora 1.1 sera calculado a soma e multiplicação
    do numero digitado pelo teclado*/
    int N, soma = 0, multiplicacao = 0, subtracao = 0, divisao = 0;
    char opcao;
    printf("Escolha uma opcao\n [+]p/ adicao\n [-] p/ subtracao\n [*]p/ multiplicacao\n [/]p/ divicao\n opcao: ");
    scanf(" %c", &opcao);
    printf("\n");
    printf("Digite um numero: ");
    scanf("%d", &N);
    getchar();  

        switch (opcao)
        {
        case '+':
            for (int i = 0; i < 10; i++)
            {
                soma = i + N;
                printf("%2d + %2d = %2d\n", i, N, soma);
            }
            break;
        case '-':
            for (int i = 0; i < 10; i++)
            {
                subtracao = i - N;
                printf("%2d - %2d = %2d\n", i + N, N, subtracao + N);
            }
            break;
        case '*':
            for (int i = 0; i < 10; i++)
            {
                multiplicacao = i * N;
                printf("%2d * %2d = %2d\n", N, i, multiplicacao);
            }
            break;
        case '/':
            for (int i = 0; i < 10; i++)
            {
                divisao = (i * N) / N;
                printf("%2d / %2d = %2d\n", i * N, N, divisao);
            }
            break;
        case '1':
            printf("A raiz quadrada de %d = %.2lf", N, sqrt((double)N));
            break;
        default:
            printf("\nOpcao invalida");
            break;
        }
        return 0;
    }