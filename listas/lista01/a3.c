#include <stdio.h>
#include <string.h>

typedef struct {
   char produto[50];
   float preco;
   int quantidade;
} Produto;

int main(){
     Produto a1;
     float total_estoque;
     float total_desconto;

     scanf("%s %f %d", a1.produto, &a1.preco, &a1.quantidade);

     total_estoque = a1.preco * a1.quantidade;
     total_desconto = total_estoque * 0.90;

     printf("Tabela do pproduto:\n");
     printf("Nome: %s\n", a1.produto);
     printf("Quantidade: %d\n", a1.quantidade);
     printf("Preço: R$ %.2f\n", a1.preco);
     printf("Valor total em estoque: R$ %.2f\n", total_estoque);
     printf("Valor com 10%% de desconto: R$ %.2f\n", total_desconto);

     

     return 0;



     
     
} 
