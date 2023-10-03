#include <stdio.h>

int main() {
    int escolha;
    float num1, num2;

    printf("Calculadora Deborah e Syang\n");
    printf("Selecione a operacao:\n");
    printf("1. Adicao\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("Digite o numero da operacao desejada: ");
    scanf("%d", &escolha);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch(escolha) {
        case 1:
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado: %.2f\n", num1 / num2);
            } else {
                printf("Erro! Divisao por zero nao permitida.\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
