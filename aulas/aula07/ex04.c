#include<stdio.h>

float Media(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

int Primo (int n){
    for(int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

float Potencia (float n, int expoente) {
    float resultado = 1;
    for(int i = 0; i < expoente; i++){
        resultado *= n;
    }
    return resultado;
}

void Menu() {
    printf("=== Menu ===\n");
    printf("1. Calcular Media\n");
    printf("2. Verificar se e Primo\n");
    printf("3. Calcular Potencia\n");
    printf("4. Sair\n");
    printf("Opcao: ");
}

int main(){

    int opcao;


    while(opcao != 4){
        Menu();
        scanf("%d", &opcao);

        switch(opcao){
            case 1: {
                float nota1, nota2, nota3;
                printf("Digite as tres notas do aluno: ");
                scanf("%f %f %f", &nota1, &nota2, &nota3);
                printf("Media: %.2f\n\n", Media(nota1, nota2, nota3));
                break;
            }
            case 2: {
                int n;
                printf("Digite um numero: ");
                scanf("%d", &n);
                if (Primo(n) == 1){
                    printf("O numero e primo\n\n");
                } else {
                    printf("O numero não e primo\n\n");
                }
                break;
            }
            case 3: {
                float base;
                int expoente;
                printf("Digite a base e o expoente: ");
                scanf("%f %d", &base, &expoente);
                printf("Resultado: %.2f\n\n", Potencia(base, expoente));
                break;
            }
            case 4: {
                printf("Saindo...\n");
                break;
            }
            default: {
                printf("Opcao invalida. Tente novamente.\n\n");
                break;
            }

        }

    }
    return 0;
}