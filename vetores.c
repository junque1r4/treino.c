#include <stdio.h>
#include <stdlib.h>

float somador(int tamanho, float *vetor);

int main(){
    float vetor[5] = {10, 10, 10, 12, 10};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("Valor total somado: %.0f\n", somador(tamanho, vetor));
    return 0;
}

float somador(int tamanho,float *vetor){
    int resultado = 0;
    int i;
    for(i = 0; i < tamanho; i++){
        resultado = resultado + vetor[i];
    }
    return resultado;
}


