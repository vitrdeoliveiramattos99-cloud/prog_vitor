#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float preco;
    int quant;
} Produto;

int main(){

    Produto a1;
    printf("Qual o nome do produto?\n");
    scanf(" %[^\n]", a1.nome);

    printf("Preço uitario: ");
    scanf("%f", &a1.preco);

    printf("quantidade em estoque: ");
    scanf("%d", &a1.quant);

    float valor_total_produto = a1.preco * a1.quant;

    printf("Nome: %s\n", a1.nome);
    printf("Preço: R$ %.2f\n", a1.preco);
    printf("Quantidade: %d\n", a1.quant);
    printf("------------------------------\n");
    printf("Valor total do produto em estoque: R$ %.2f\n", valor_total_produto);

    return 0;
}