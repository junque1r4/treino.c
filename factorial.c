#include "stdio.h"
#include "curses.h"
#include "math.h"

int CalcFat5(); // Protótipo da função CalcFat5

int main()
{
    int Fat5;
    Fat5 = CalcFat5();
    printf("%s %d \n", "Fatorial de 5:", Fat5);
    printf("\n");
    return 0;
}

// Implementação da função CalcFat5()
int CalcFat5()
{
    int counter, Fat;
    Fat = 1;
    for (counter=1; counter<=5;counter++)
        Fat = Fat*counter;
    
    return Fat; 
}