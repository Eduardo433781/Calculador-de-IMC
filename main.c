#include <stdio.h>

int main()
{
    int opcao;

    do
    {
        printf("========================\n");
        printf("Sistema de Calculo de IMC\n");
        printf("========================\n");
        printf("Este programa calcula o Indice de Massa Corporal (IMC) com base no peso e altura fornecidos pelo usuario.\n");
        printf("Seja bem-vindo!\n");
        printf("Escolha uma opcao:\n");
        printf("1 - Calcular IMC\n");
        printf("2 - Sair\n");

        if (scanf("%d", &opcao) != 1)
        {
            printf("Entrada invalida. Digite 1 ou 2.\n");
            return 1;
        }

        switch (opcao)
        {
        case 1:
        {
            float peso, altura, imc;

            printf("Digite o seu peso em kg: ");
            if (scanf("%f", &peso) != 1 || peso <= 0)
            {
                printf("Peso invalido. Digite um valor maior que zero.\n");
                return 1;
            }

            printf("Digite a sua altura em metros (ex.: 1.70): ");
            if (scanf("%f", &altura) != 1 || altura <= 0)
            {
                printf("Altura invalida. Digite um valor maior que zero.\n");
                return 1;
            }

            imc = peso / (altura * altura);

            printf("Seu IMC e: %.2f\n", imc);

            if (imc < 18.5)
            {
                printf("Classificacao: Abaixo do peso\n");
            }
            else if (imc < 25.0)
            {
                printf("Classificacao: Peso normal\n");
            }
            else if (imc < 30.0)
            {
                printf("Classificacao: Sobrepeso\n");
            }
            else
            {
                printf("Classificacao: Obesidade\n");
            }
            break;
        }
        case 2:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
        }

    } while (opcao != 2);

    return 0;
}