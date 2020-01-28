#include <stdio.h>

int calcFat(int limit);

int main(){

    int fatt;
    // int limit;
    // printf("Fatorial: ");
    // scanf("%d", &limit);
    fatt = calcFat(5);
    printf("O fatorial = %d", fatt);

    return 0;
}

int calcFat(int start){
    int fim, factorial = 1;

    for(fim=0;start>fim;start--){
        factorial *= start;
    }

    return factorial;
}
