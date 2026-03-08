#include <stdio.h> // Para ler teclado e exibir texto (printf/scanf).
#include <string.h>//Responsavel pela manipulção de letras, numeros, simbolos e espaços.
#include <math.h>// Para funções matemáticas como a raiz quadrada (sqrt).

//1. Cabeçalho e Variáveis

int main(){
    int soma = 0, multiplicacao = 0, subtracao = 0, divisao = 0;
    int N;// Usado para o número da tabuada (inteiro)
    char opcao;// Guarda o caractere digitado (+, -, 1, 2, R, etc)
    float n1, n2;// Usado na calculadora para aceitar números com vírgula

    printf("Escolha uma Opcao mostra a Tabuada do numero digitado ou fazer um calculo matemtico\n");
    printf("[1] Tabuada\n[2] Calculo matematico\nOpcao: ");
    scanf(" %c", &opcao);// O espaço antes do %c limpa o "Enter" da memória

//2. Bloco da Tabuada (Opção 1)
    if (opcao == '1')
    {
        printf("\n------ Menu Tabuada ------\n");
        printf("Escolha uma opcao\n [+]p/ adicao\n [-] p/ subtracao\n [*]p/ multiplicacao\n [/]p/ divicao\n opcao: ");
        scanf(" %c", &opcao);
        printf("\n--------------------------\n");

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
            if(N != 0){
                for (int i = 0; i < 10; i++)
                {
                    divisao = (i * N) / N;
                    printf("%2d / %2d = %2d\n", i * N, N, divisao);
                }
            }
            else{
                printf("Nao e possivel fazer divisao por zero");
            }
            break;

        default:
            printf("\nOpcao invalida");
            break;
        }
    }
    //3. Bloco da Calculadora e Raiz (Opção 2)

    else if (opcao == '2')
    {
        printf("\n----- Menu Calculadora -----\n");
        printf("Operacao\n [+]p/ adicao\n [-] p/ subtracao\n [*]p/ multiplicacao\n [/]p/ divicao\n [R ou r]p/ Calcula Raiz Quadrada\n opcao: ");
        scanf(" %c", &opcao);
        printf("\n----------------------------\n");

        if (opcao == 'R' || opcao == 'r')
        {
            printf("Digite um numero: ");
            scanf("%d", &N);
            if(N >0){
                printf("A raiz quadrada de %d = %.2lf", N, sqrt((double)N));
            }else{
                printf("\nNumero negativo");
            }
            
        }else{
            printf("Ditigite um numero: ");
            scanf("%f", &n1);
            printf("Digite outro numero: ");
            scanf("%f", &n2);
            switch (opcao)
            {
            case '+':
                printf("Resultado = %.2f", n1 + n2);
                break;
    
            case '-':
                printf("Resultado = %.2f", n1 - n2);
                break;
            case '*':
    
                printf("Resultado = %.2f", n1 * n2);
                break;
    
            case '/':
                printf("Resultado = %.2f", n1 / n2);
                break;
    
            default:
                printf("Opcao invalida!");
                break;
            }
        }

    }
    return 0;
}