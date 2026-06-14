#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota1, nota2, nota3;
    float media;
    char conceito;
} Aluno;

float Media(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3;
}

char Conceito(float media) {
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

 void OrdenaAlunos(Aluno turma[], int n){
        Aluno temp;
        for (int i = 0; i < n; i++){
            for (int j = i +1; j < n; j++){
                if (turma[i].media < turma[j].media){
                    temp = turma[i];
                    turma[i] = turma[j];
                    turma[j] = temp;
                }
            }
        }
    }

    void ImprimeAluno(Aluno aluno) {
        printf("===========================\n");
        printf("Nome: %s\n", aluno.nome);
        printf("===========================\n");
        printf("Notas: %.2f, %.2f, %.2f\n", aluno.nota1, aluno.nota2, aluno.nota3);
        printf("Media: %.2f\n", aluno.media);
        printf("Conceito: %c\n", aluno.conceito);
    }
       

int main() {

    int n;
    printf("Entre com o numero de alunos:");
    scanf("%d", &n);

    Aluno turma[n];

    for (int i = 0; i < n; i++) {
        printf("Entre com os dados do aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", turma[i].nome);
        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &turma[i].nota3);

        turma[i].media = Media(turma[i].nota1, turma[i].nota2, turma[i].nota3);
        turma[i].conceito = Conceito(turma[i].media);

    }
    OrdenaAlunos(turma, n);

    printf("\n\n=== BOTELIM DA TURMA \n\n");

    for (int i = 0; i < n; i++) {
        ImprimeAluno(turma[i]);
    }

    

    return 0;
}
