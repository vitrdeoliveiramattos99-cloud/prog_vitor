#include <stdio.h>

int soma(int base, int exp){
    if(exp == 0){
        return 1;
    } else {
        printf("%d x ", base);
        return base * soma(base, exp - 1);
    }
}

int main(){
    int base, exp;

    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &exp);

    printf("Potencia: %d\n", soma(base, exp));
    return 0;
}