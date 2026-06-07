#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main(){

    int n;
    float total = 0;
    float media;
    float maiorNota = -1;
    char nomeMaiorNota[50];
    float menorNota = 100;
    char nomeMenorNota[50];
    int aprovados = 0;

    printf("Quantos alunos tem na classe? ");
    scanf("%d", &n);

    Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

        total += alunos[i].nota;

        if (alunos[i].nota >= 7.0) {
            aprovados++;
        }

        if (alunos[i].nota > maiorNota) {
            maiorNota = alunos[i].nota;
            strcpy(nomeMaiorNota, alunos[i].nome);
        }

        if (alunos[i].nota < menorNota) {
            menorNota = alunos[i].nota;
            strcpy(nomeMenorNota, alunos[i].nome);
        }
    }

    media = total / n;

     printf("\n================================\n");
    printf("         TABELA DA TURMA\n");
    printf("================================\n");
    printf("%-20s %s\n", "Nome", "Nota");
    printf("--------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-20s %.2f\n", alunos[i].nome, alunos[i].nota);
    }

    printf("================================\n");
    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f (%s)\n", maiorNota, nomeMaiorNota);
    printf("Menor nota: %.2f (%s)\n", menorNota, nomeMenorNota);
    printf("Aprovados: %d\n", aprovados);

    return 0;

}