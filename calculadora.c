#include <stdlib.h>
#include <stdio.h>
#include "calculadora.h"


int main(){
    float vetor[30]; 
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int option, i, option2;
    preencher_vetor(tamanho, vetor);
    
    while (1)
    {
    
        intro();
        scanf("%i", &option);

        if(option == 0){
            system("clear");
            printf("Até mais! \n");
            return 0;
        }

        for(i = 0; i < tamanho; i++){

            printf("Digite o valor a ser adicionado ao vetor na posição %d [0 to stop]: ", i );
            scanf("%f", &vetor[i]);
            if (vetor[i] == 0)
            {
                break;
            }    
        }

        switch(option) {
        case 1:
            system("clear");
            saida(somar(tamanho, vetor));
            if(saida == 1){
                return 0;
            }else
            {
                system("clear");
                break;
            }
        case 2:
            printf("2\n");
            break;
        case 3:
            printf("3\n");
            break;
        case 4:
            printf("4\n");
            break;
        default:
            printf("Opção não listada!\n");
            break;
        }
    }
    return 0;
}

/* Menu principal com as opções */

void intro(){
    printf("\e[1;37m+--------------------+\n\x1b[0m");
    printf("|    \e[1;33mKuronoladora\x1b[0m    |\n");
    printf("\e[1;37m+--------------------+\n\x1b[0m");
    printf("|    \e[1;33mVersion: 666\x1b[0m    |\n");
    printf("\e[1;37m+--------------------+\n\x1b[0m");
    printf("|\x1b[1;33m[0]\x1b[0m  \e[0;37mSair\x1b[0m           |\n");
    printf("|\x1b[1;33m[1]\x1b[0m  \e[0;37mSoma\x1b[0m           |\n");
    printf("|\x1b[1;33m[2]\x1b[0m  \e[0;37mMultiplicação\x1b[0m  |\n");
    printf("|\x1b[1;33m[3]\x1b[0m  \e[0;37mSubtração\x1b[0m      |\n");
    printf("|\x1b[1;33m[4]\x1b[0m  \e[0;37mDivisão\x1b[0m        |\n");
    printf("\e[1;37m+--------------------+\n\x1b[0m");
    printf("|\e[1;33m[Escolha]: \x1b[0m");
}

/* Menu de saída */

int saida(int resultado){
    int retorno = 0;
    printf(" Resultado:      %d   \n", resultado);
    printf("+--------------------+\n");
    printf("|[0]  Menu           |\n");
    printf("|[1]  Sair           |\n");
    printf("+--------------------+\n");
    printf("|\e[1;33m[Escolha]: \x1b[0m");
    scanf("%d", &retorno);

    return retorno;
}

/* Função para somar os 2 valores digitados */

int somar(int tamanho, float *vetor){
    int resultado = 0;
    int i = 0;
    
    for(i; i < tamanho; i++){
        resultado += vetor[i];
    }
    return resultado;
}

int subtrair(int tamanho, float *vetor){
        int resultado = 0;
    int i = 0;
    
    for(i; i < tamanho; i++){
        resultado -= vetor[i];
    }
    return resultado;
}

int multiplicar(int tamanho, float *vetor){
        int resultado = 0;
    int i = 0;
    
    for(i; i < tamanho; i++){
        resultado *= vetor[i];
    }
    return resultado;
}

int dividir(int tamanho, float *vetor){
        int resultado = 0;
    int i = 0;
    
    for(i; i < tamanho; i++){
        resultado = resultado / vetor[i];
    }
    return resultado;
}

int preencher_vetor(int tamanho,float *vetor){
    int i;
    for(i = 0; i < tamanho; i++ ){
        vetor[i] = 0;
    }
    return vetor;
}