#include <stdio.h>
#include <stdlib.h>

int main() {
    double X, Y, resultado;
    int opcao;
    char continuar;

    do{
        printf("\n===============================\n");
        printf("   Calculadora Simples");
        printf("\n===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");

        do {
            printf("Opção: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida! Por favor, digite apenas números.\n");

            while (getchar() != '\n');
            opcao = 0; 
        }

        if (opcao < 1 || opcao > 5) {
            printf("Entrada inválida! Por favor, selecione uma opção entre 1 e 5.\n");
        }
    } while (opcao < 1 || opcao > 5);

        if (opcao == 5) {
            printf("\nObrigado por usar a calculadora! Até a próxima.\n");
            break;
        }

        printf("\nDigite o primeiro número: ");
        if (scanf("%lf", &X) != 1) {
            printf("Entrada inválida! Por favor, digite apenas números.\n");
            while (getchar() != '\n');
            continue; 
        }

        printf("\nDigite o segundo número: ");
        if (scanf("%lf", &Y) != 1) {
            printf("Entrada inválida! Por favor, digite apenas números.\n");
            while (getchar() != '\n');
            continue; 
        }

        switch(opcao) {
            case 1:
                resultado = X + Y;
                printf("Resultado: %.2lf + %.2lf = %.2lf\n", X, Y, resultado);
                break;
            case 2:
                resultado = X - Y;
                 printf("Resultado: %.2lf - %.2lf = %.2lf\n", X, Y, resultado);
                break;
            case 3:
                resultado = X * Y;
                 printf("Resultado: %.2lf * %.2lf = %.2lf\n", X, Y, resultado);
                break;
            case 4:
                if (Y == 0) {
                    printf("Erro: Divisão por zero não é permitida. \n");
                } else {
                    resultado = X / Y;
                    printf("Resultado: %.2lf / %.2lf = %.2lf\n", X, Y, resultado);
                }
                break;
        }

        do {
            printf("\nDeseja realizar outra operação? (s/n): ");
            scanf(" %c", &continuar);

            if (continuar == 'S') {
                continuar = 's';
            } else if (continuar == 'N') {
                continuar = 'n';
            }

            if (continuar != 's' && continuar != 'n') {
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
            }
        } while (continuar != 's' && continuar !='n');

    } while (continuar == 's');

    if (continuar == 'n') {
        printf("\nObrigado por usar a calculadora! Até a próxima.\n");
    }
    
    return 0;
}
