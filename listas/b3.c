#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[50];
    float pontos;
} Jogador;

int main(){

    int n;
    float mais_pontos = -1.0;
    char nome_mais_pontos[50];
    float menos_pontos = 9999.0;
    char nome_menos_pontos[50];


    printf("Quantos jogadores tem no campeonato?\n");
    scanf("%d", &n);

    Jogador jogadores[n];

    for(int i = 0; i < n; i++){
        printf("Qual o nome do jogador?\n");
        scanf(" %[^\n]", jogadores[i].nome);

        printf("Quantos pontos fez no campeonato? ");
        scanf("%f", &jogadores[i].pontos);

        if (jogadores[i].pontos > mais_pontos){
            mais_pontos = jogadores[i].pontos;
            strcpy(nome_mais_pontos, jogadores[i].nome);
        }

        if (jogadores[i].pontos < menos_pontos){
            menos_pontos = jogadores[i].pontos;
            strcpy(nome_menos_pontos, jogadores[i].nome);
        }
    }   

    printf(" Vitoria: %s com %.2f pontos\n", nome_mais_pontos, mais_pontos);
    printf(" Derrota: %s com %.2f pontos\n", nome_menos_pontos, menos_pontos);

    return 0;

}