#include <stdio.h>
#include <string.h>

typedef struct 
{
    char nome[50];
    int idade;
    float altura;
}Aluno;

int main(){
    Aluno a1;

    scanf("%s %d %f", a1.nome, &a1.idade, &a1.altura);

    printf("FICHA ALUNO:\n");
    printf("Nome: %s\n", a1.nome);
    printf("Idade: %d\n", a1.idade);
    printf("Altura: %.2f\n", a1.altura);
}
