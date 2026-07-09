#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int vitorias, empates, derrotas, pontos;
} Time;

void lerTimes(Time times[], int n);
void calcularPontos(Time times[], int n);
void imprimirClassificacao(Time times[], int n);
int encontrarLider(Time times[], int n);

int main() {
    int n;
    printf("Quantidade de times: "); 
    scanf("%d", &n);

    Time times[n];

    lerTimes(times, n);
    calcularPontos(times, n);
    imprimirClassificacao(times, n);

    int id_lider = encontrarLider(times, n);

    printf("\n--- CAMPEAO DO TORNEIO ---\n");
    printf("Campeao: %s com %d pontos!\n", times[id_lider].nome, times[id_lider].pontos);

    return 0;
}

void lerTimes(Time times[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Time %d ---\n", i + 1);
        printf("Nome: "); 
        scanf(" %[^\n]", times[i].nome);
        
        printf("Vitorias: "); 
        scanf(" %d", &times[i].vitorias);  // Espaço antes do %d limpa o buffer
        
        printf("Empates: "); 
        scanf(" %d", &times[i].empates);   // Espaço antes do %d limpa o buffer
        
        printf("Derrotas: "); 
        scanf(" %d", &times[i].derrotas); // Espaço antes do %d limpa o buffer
    }
}

void calcularPontos(Time times[], int n) {
    for (int i = 0; i < n; i++) {
        times[i].pontos = (times[i].vitorias * 3) + times[i].empates;
    }
}

void imprimirClassificacao(Time times[], int n) {
    printf("\n-------------------------------------------------------------\n");
    printf("%-20s | %-4s | %-4s | %-4s | %-6s\n", "Nome do Time", "V", "E", "D", "Pontos");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s | %-4d | %-4d | %-4d | %-6d\n", 
               times[i].nome, times[i].vitorias, times[i].empates, times[i].derrotas, times[i].pontos);
    }
    printf("-------------------------------------------------------------\n");
}

int encontrarLider(Time times[], int n) {
    int id_lider = 0;
    for (int i = 1; i < n; i++) {
        if (times[i].pontos > times[id_lider].pontos) {
            id_lider = i;
        }
    }
    return id_lider;
}