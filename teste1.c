//Calcular a potencia de um numero

#include <stdio.h>
#include <math.h>


int main(){

    //criar variaveis
    int a, b, pot = 1;

    printf("Programa para calcular a potencia!\n\n");

    printf("Digite o valor da base: \n");
    scanf("%d", &a);

    printf("Digite o valor da potencia: \n");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++)
    {
        pot = pot * a;
    }
    
   

    printf("A potencia vale: \n %d", pot);
}