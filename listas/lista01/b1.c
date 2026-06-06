#include <stdio.h>
#include <string.h>

// Defini um tamanho fixo máximo para o vetor que o compilador aceite, pq ele não estava acietando
#define MAX_ALUNOS 100

typedef struct {
    char nome[50];
    float nota;
} Aluno;

int main() {
    int n;
    float soma = 0.0;
    int aprovados = 0;
    float media;

    printf("Quantos alunos tem na turma? (Maximo %d):\n", MAX_ALUNOS);
    scanf("%d", &n);

    // SOLUÇÃO DO ERRO: Agora o compilador sabe o tamanho exato na compilação
    Aluno turma[MAX_ALUNOS];

    for (int i = 0; i < n; i++) {
        printf("Qual o nome do aluno %d?\n", i++);
        scanf("%s", turma[i].nome);

        printf("Qual a nota dele?\n", i++);
        scanf("%f", &turma[i].nota);
        
        soma = soma + turma[i].nota;
        
        if (turma[i].nota >= 7.0) {
            aprovados++;
        }
    } 

    media = soma / n;

    printf("\n\n================================");
    printf("\n       TABELA DE ALUNOS         ");
    printf("\n================================\n");
    printf("%-20s | %s\n", "Nome", "Nota");
    printf("--------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%-20s | %.2f\n", turma[i].nome, turma[i].nota);
    }
    printf("--------------------------------\n");

    printf("Media da turma: %.2f\n", media);
    printf("Quantidade de aprovados: %d\n", aprovados);

    return 0;
}
