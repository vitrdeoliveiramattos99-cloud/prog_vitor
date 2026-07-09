#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[50];
    float pontos;
    int vitorias;
} Jogador;

int main(){

    int n;
    float mais_pontos = -1.0;
    char nome_mais_pontos[50];
    int mais_vitorias = -1;
    char nome_mais_vitorias[50];
    int total_vitorias = 0;
    float media_vitorias;
    int classificados = 0;

    printf("Quantos jogadores tem no campeonato?\n");
    scanf("%d", &n);

    Jogador jogadores[n];

    for(int i = 0; i < n; i++){
        printf("Qual o nome do jogador?\n");
        scanf(" %[^\n]", jogadores[i].nome);

        printf("Quantos pontos fez no campeonato? ");
        scanf("%f", &jogadores[i].pontos);

        printf("Quantas vitorias teve no campeonato? ");
        scanf("%d", &jogadores[i].vitorias);
        total_vitorias += jogadores[i].vitorias;
        media_vitorias = total_vitorias / n;
        if (jogadores[i].vitorias >= media_vitorias) {
            classificados++;
        }

        if (jogadores[i].pontos > mais_pontos){
            mais_pontos = jogadores[i].pontos;
            strcpy(nome_mais_pontos, jogadores[i].nome);
        }

        if (jogadores[i].vitorias > mais_vitorias){
            mais_vitorias = jogadores[i].vitorias;
            strcpy(nome_mais_vitorias, jogadores[i].nome);
        }

    }   

    printf("\n\n=======================================================");
    printf("\n                  RELATORIO DO CAMPEONATO                 ");
    printf("\n=======================================================\n");
    printf("%-20s | %-10s | %-10s\n", "Jogador", "Pontos", "Vitorias");
    printf("-------------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        printf("%-20s | %.2f pontos | %d vitorias\n", 
               jogadores[i].nome, 
               jogadores[i].pontos, 
               jogadores[i].vitorias);
    }

    printf("\n\n Jogador com mais pontos: %s com %.2f pontos\n", nome_mais_pontos, mais_pontos);
    printf(" Jogador com mais vitorias: %s com %d vitorias\n", nome_mais_vitorias, mais_vitorias);
    printf(" Numero de jogadores classificados: %d\n", classificados);

    return 0;

}