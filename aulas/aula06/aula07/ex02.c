#include <stdio.h>
#include <string.h>

float Media (float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

char Conceito (float media) {
    if (media >= 9.0) {
        return 'A';
    } else if (media >= 7.0) {
        return 'B';
    } else if (media >= 5.0) {
        return 'C';
    } else {
        return 'D';
    }
}

    void imprimirSituacao (char nome[], float media, char conceito) {
       printf("\n---- Situação do Aluno ----\n");
       printf("Nome: %s\n", nome);
       printf("Média: %.2f\n", media);
       printf("Conceito: %c\n", conceito);
       printf("--------------------------\n");
    }

int main() {
    char nome[50];
    float nota1, nota2, nota3;
    char conceito;

    for(int i = 0; i < 3; i++) {
        printf("Nome: ");
        scanf(" %[^\n]", nome);
        
        printf("Digite as três notas do aluno: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        getchar();

        float media = Media(nota1, nota2, nota3);
        conceito = Conceito(media);

        imprimirSituacao(nome, media, conceito);
    }

    return 0;
}