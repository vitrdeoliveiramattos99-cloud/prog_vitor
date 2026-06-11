#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    float preco;
    int quant;
    float totalEstoque;
} Produto;

 void lerProdutos(Produto est[], int n);
 void calcularEstoque(Produto est[], int n);
 void imprimirEstoque(Produto est[], int n);
 int encontrarMaiorEstoque(Produto est[], int n);
 int encontrarMenorPreco(Produto est[], int n);

 int main(){

    int n;
    printf("Quantidade de produtos: ");
    scanf("%d", &n);

    Produto estoque[n];

    lerProdutos (estoque, n);
    calcularEstoque (estoque, n);
    imprimirEstoque (estoque, n);
   int id_maior = encontrarMaiorEstoque (estoque, n);
   int id_menor = encontrarMenorPreco(estoque, n);

   printf("\n --- RELATORIO DE DESTAQUES ---\n");
   printf("Maior Estoque: %s (%d unidades)\n", estoque[id_maior].nome, estoque[id_maior].quant);
   printf("Menor Preco: %s (R$ %.2f)\n", estoque[id_menor].nome, estoque[id_menor].preco);

    return 0;
 }

 void lerProdutos (Produto est[], int n){
    for(int i = 0; i < n; i++){
        printf("\n--- Produto %d ---\n", i + 1);
        printf("Nome: "); scanf(" %[^\n]", est[i].nome);
        printf("Preco: "); scanf(" %[^\n]", est[i].preco);
        printf("Quantidade: "); scanf(" %[^\n]", est[i].quant);
    }
 }

 void calcularEstoque (Produto est[], int n){
    for(int i = 0; i < n; i++){
    est[i].totalEstoque = (est[i].preco * est[i].quant);
 }
}

 void imprimirEstoque (Produto est[], int n){
    float total = 0;

    printf("\n-------------------------------------------------------------\n");
    printf("%-20s | %-10s | %-12s | %-10s\n", "Nome do Produto", "Preço", "Quantidade", "Total Est.");
    printf("-------------------------------------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("%-20s | R$ %-7.2f | %-12d | R$ %-7.2f\n", 
               est[i].nome, est[i].preco, est[i].quant, est[i].totalEstoque);
        
        total += est[i].totalEstoque; // Acumula o valor de todos os produtos
    }
    printf("-------------------------------------------------------------\n");
    printf("TOTAL EM ESTOQUE: R$ %.2f\n", total);
 }

 int encontrarMaiorEstoque (Produto est[], int n){
    int maior_estoque = 0;
    for(int i =1; i < n; i++){
        if(est[i].quant > est[maior_estoque].quant){
            maior_estoque = i;
        }
    }
    return maior_estoque;
 }

 int encontrarMenorPreco (Produto est[], int n){
    int menor_preco = 0;
    for(int i =1; i < n; i++){
        if(est[i].preco < est[menor_preco].preco){
            menor_preco = i;
        }
    }
    return menor_preco;
 }
