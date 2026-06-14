#include <stdio.h>
#include <string.h>

void FizzBuzz (int n) {
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("\nFizzBuzz");
            }
        else if(i % 3 == 0){
            printf("\nFizz");
        }
        else if(i % 5 == 0){
            printf("\nBuzz");
        }
        else{
            printf("\n%d", i);
        }
    }
}

int main(){
    
    int n;
    
    printf("Entre com um numero:");
    scanf("%d", &n);
    
    FizzBuzz(n);
}