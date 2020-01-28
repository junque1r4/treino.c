#include <stdio.h>

double factorial(int n);

int main(){
    int user_input;
    double factorial_result;

    printf("Digite o valor a ser calculado: ");
    scanf("%d", &user_input);

    factorial_result = factorial(user_input);

    printf("O fatorial de %d: %.0f", user_input, factorial_result);
    return 0;
}

double factorial(int user_input){
    double valor_factor;
    
    if(user_input <= 1){
        return 1;
    }
    else{
        valor_factor = user_input * factorial(user_input - 1);
        return valor_factor;
    }
}