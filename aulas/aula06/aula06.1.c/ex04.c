#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float n1, n2, n3;
    float media;
    char conceito;
} Aluno;


void lerTurma(Aluno turma[], int n);
void calcularMediasTurma(Aluno turma[], int n);
void imprimirTurma(Aluno turma[], int n);
int encontrarDestaque(Aluno turma[], int n);
Aluno calcularMedia(Aluno a);
Aluno definirConceito(Aluno a);
void buscarAlunoPorNome(Aluno turma[], int n);


int main() {
    int n;
    printf("Quantos alunos? ");
    scanf("%d", &n);
    
    Aluno turma[n];
    
    lerTurma(turma, n);
    calcularMediasTurma(turma, n);
    imprimirTurma(turma, n);
    
    int dest = encontrarDestaque(turma, n);
    printf("\nDestaque: %s (%.1f)\n", turma[dest].nome, turma[dest].media);
    
    buscarAlunoPorNome(turma, n);
    
    return 0;
}

void buscarAlunoPorNome(Aluno turma[], int n) {
    char busca[50];
    printf("\nBuscar aluno pelo nome: ");
    scanf(" %[^\n]", busca);
    
    int encontrado = 0;
    
    for (int i = 0; i < n; i++) {
        if (strcmp(turma[i].nome, busca) == 0) {
            printf("\n[Aluno Encontrado!]\n");
            printf("Nome: %s\n", turma[i].nome);
            printf("Media: %.1f\n", turma[i].media);
            printf("Conceito: %c\n", turma[i].conceito);
            
            encontrado = 1;
            break; 
        }
    }
    
    
    if (!encontrado) {
        printf("\nAluno nao encontrado.\n");
    }
}

void lerTurma(Aluno turma[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: "); 
        scanf(" %49s", turma[i].nome);
        printf("N1: "); 
        scanf("%f", &turma[i].n1);
        printf("N2: "); 
        scanf("%f", &turma[i].n2);
        printf("N3: "); 
        scanf("%f", &turma[i].n3);
    }
}

Aluno calcularMedia(Aluno a) {
    a.media = (a.n1 + a.n2 + a.n3) / 3;
    return a;
}

Aluno definirConceito(Aluno a) {
    if (a.media >= 9.0) a.conceito = 'A';
    else if (a.media >= 7.0) a.conceito = 'B';
    else if (a.media >= 5.0) a.conceito = 'C';
    else a.conceito = 'D';
    return a;
}

void calcularMediasTurma(Aluno turma[], int n) {
    for (int i = 0; i < n; i++) {
        turma[i] = calcularMedia(turma[i]);
        turma[i] = definirConceito(turma[i]);
    }
}

void imprimirTurma(Aluno turma[], int n) {
    printf("\n%-20s %5s %7s %8s\n", "NOME", "MEDIA", "CONCEITO", "SITUACAO");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        char *sit = (turma[i].conceito == 'D') ? "Reprovado" : "Aprovado";
        printf("%-20s %5.1f %8c %9s\n",
               turma[i].nome, turma[i].media,
               turma[i].conceito, sit);
    }
    printf("-------------------------------------------------------------\n");
}

int encontrarDestaque(Aluno turma[], int n) {
    int iMaior = 0;
    for (int i = 1; i < n; i++) {
        if (turma[i].media > turma[iMaior].media) {
            iMaior = i;
        }
    }
    return iMaior;
}