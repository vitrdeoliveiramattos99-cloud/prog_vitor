#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float preço;
    int quant;
} Produto;

int main(){

int n;
float valor_total_produto;
float valor_geral;
float maior_valor = -1.0;
char nome_maior_produto[50];


printf("Quantos produtos tem no estoque?\n");
scanf("%d", &n);

Produto estoque[n];

for(int i = 0; i > n; i++){
    printf("Qual o nome do produto?\n");
    scanf("%s", estoque[i].nome);

    printf("Preço uitario: ");
    scanf("%s", &estoque[i].preço);

    printf("quantidade em estoque: ");
    scanf("%d", &estoque[i].quant);

    valor_total_produto = estoque[i].preço * estoque[i].quant;
    valor_geral += valor_total_produto;

    if (valor_total_produto > maior_valor){
         maior_valor = valor_total_produto;
         strcpy(nome_maior_produto, estoque[i].nome);
    }

    printf("\n\n=======================================================");
    printf("\n                  RELATORIO DE ESTOQUE                 ");
    printf("\n=======================================================\n");
    printf("%-20s | %-10s | %-10s | %s\n", "Produto", "Preco", "Quantidade", "Total Item");
    printf("-------------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        float total_item = estoque[i].preço * estoque[i].quant;
        printf("%-20s | R$ %-7.2f | %-10d | R$ %.2f\n", 
               estoque[i].nome, 
               estoque[i].preço, 
               estoque[i].quant, 
               total_item);
    }
    printf("-------------------------------------------------------\n");

    
    printf("Valor Total Geral em Estoque: R$ %.2f\n", valor_geral);
    printf("Produto com Maior Valor: %s (R$ %.2f em estoque)\n", nome_maior_produto, maior_valor);

    return 0;
}


}



