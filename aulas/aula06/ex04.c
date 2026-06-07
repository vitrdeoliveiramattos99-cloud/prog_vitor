#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main(){
    int n;
    float total = 0;
    float total_geral = 0;
    float maior_valor = -1;
    char nome_maior_valor[50];
    
    printf("Quantos produtos tem na loja? ");
    scanf("%d", &n);

    Produto produtos[n];

    for(int i = 0; i < n; i++){
        printf("Produto: ");
        scanf(" %[^\n]", &produtos[i].nome);

        printf("Preco: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);

        total = produtos[i].preco * produtos[i].quantidade;
        total_geral += total;

        if (total > maior_valor){
            maior_valor = total;
            strcpy(nome_maior_valor, produtos[i].nome);
        }
    }

    printf("Produto                Peco    Quantidade    Total\n");
    printf("--------------------------------------------------\n");
    for(int i = 0; i < n; i++){
        total = produtos[i].preco * produtos[i].quantidade;
        printf("%-20s     %.2f     %d           %.2f\n", produtos[i].nome, produtos[i].preco, produtos[i].quantidade, total);
    }
    printf("--------------------------------------------------\n");
    printf("Total geral: %.2f\n", total_geral);
    printf("Maior estoque:  %s  (%.2f)\n", nome_maior_valor, maior_valor);
}