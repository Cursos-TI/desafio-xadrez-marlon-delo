#include <stdio.h>
int main (){

    int  i = 1 ;
    int I = 1;
    int j = 1;
    char direita, frente, esquerda;
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
        printf (" esquerda\n");
        I++;
    }
    
    printf("cavalo\n");
    for (int i = 1; i < 2; i++);
    {
        while (j < 3)
        {
            printf(" frente\n");
            j++;
        }
       printf("direita\n") ;
    }



    
    return 0;







}