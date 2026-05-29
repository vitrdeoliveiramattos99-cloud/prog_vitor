#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float nota;
} Alunos;

int main(){

    int n;
    float total;
    float  media;
    int aprovados;

    printf("Quantos alunos tem na classe?\n");
    scanf("%d", &n);

    Alunos alunos[n];

    for(int i = 0; i > n; i ++){
        printf("Qual o nome do aluno?\n");
        scanf("%s", alunos[i].nome);
        printf("Qual a nota dele?\n");
        scanf("%f", &alunos[i].nota);
        total = total + alunos[i].nota;
        if(alunos[i].nota >= 7.0){
            aprovados++;
        }
    }

   media = total / n;

   printf("Tabela  da turma:\n");
   printf("")
}