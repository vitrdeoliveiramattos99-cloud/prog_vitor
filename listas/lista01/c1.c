#include <stdio.h>
#include <string.h>

float soma (float a, float b) {
    return (a + b);
}
float subtracao (float a, float b) {
    return (a - b);
}
float multiplicacao (float a, float b) {
    return (a * b);
}
float divisao (float a, float b) {
    if (b == 0){
        printf("Erro: 404\n");
    }
    return (a / b);
}

int main(){
    
    float a;
    float b;
    
    printf("Entre com 2 numeros: ");
    scanf("%f %f", &a, &b);
    
    printf("Soma: %.2f\n", soma(a, b));
    printf("Subtração: %.2f\n", subtracao(a, b));
    printf("Multiplicação: %.2f\n", multiplicacao(a, b));
    
    if(b != 0){
        printf("Divisão: %.2f\n", divisao(a, b));
    } else {
        printf("Divisão: error 404\n");
    }
    
    return 0;
}
