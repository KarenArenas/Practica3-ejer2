//ARENAS MIMBRERA KAREN MARIEL
//Practica3 - Programa numeros pares
#include <stdio.h> 
#include <math.h> 

int i;
int main ()
{
    printf("Los numeros pares entre 0 y 100 son: ");
    for (i=0;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}