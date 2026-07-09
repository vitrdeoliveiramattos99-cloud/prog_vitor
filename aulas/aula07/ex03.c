#include <stdio.h>

int potencia (int n) {
    return (n * n);
}

int fatorial (int n) {
    int resultado = 1;
    for(int i = 2; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

int Primo (int n){
    for(int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    
    printf("Entre com um numero: ");
    scanf("%d", &n);

    printf("\n---- Resultados ----\n");
    printf("Fatorial: %d\n", fatorial(n));
    printf("Potencia ao quadrado: %d\n", potencia(n));

    if (Primo(n) == 1){
        printf("O numero é primo\n");
    } else {
        printf("O numero não é primo\n");
    }
    
    return 0;
}