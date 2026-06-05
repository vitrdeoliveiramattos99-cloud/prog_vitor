#include <stdio.h>
#include <string.h>

typedef struct {
    int time1;
    int time2;
} Placar;

int main(){
    
    Placar a1;
    
    scanf("%d %d", &a1.time1, &a1.time2);
    
    if(a1.time1 > a1.time2){
        printf("Time1 %d x Time2 %d\n", a1.time1, a1.time2);
        printf("Time1 ganhou\n");
    }
    else if(a1.time2 > a1.time1){
        printf("Time1 %d x Time2 %d\n", a1.time1, a1.time2);
        printf("Time2 ganhou\n");
    }
    else {
        printf("Time1 %d x Time2 %d\n", a1.time1, a1.time2);
        printf("Empate\n");
    }
}