#include <stdio.h>
int main (){

    int  i = 1 ;
    int I = 1;
    printf ("Bispo:\n");
    do
    {
        printf ("diagonal \n");
        i++;
    } while (i <= 4);
    
    
    
    
    printf ("TORRE:\n");
    for (int i = 0; i <= 4; i++)
    {
        printf ("Direita\n");
    }
    
    printf ("Rainha:\n");
    
    while ( I <= 8)
    {
        printf (" esquerda\n", I);
        I++;
    }
    
    
    return 0;







}