#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
} Alunos;

int main() {
    int n;
    float total = 0;
    float media;
    int aprovados = 0;

    printf("Quantos alunos tem na classe? ");
    scanf("%d", &n);

    Alunos alunos[n];

    for (int i = 0; i < n; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        scanf("%49s", alunos[i].nome);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);

        total += alunos[i].nota;

        if (alunos[i].nota >= 7.0) {
            aprovados++;
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
    printf("Aprovados: %d\n", aprovados);

    return 0;
}
