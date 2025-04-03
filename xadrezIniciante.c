#include <stdio.h>

void recursivo (char * direcao, int quantidade){
    printf ("%s\n", direcao);
    if (quantidade <= 0 )
    {
 return;
    }
    quantidade -=1;
 
 if (direcao == "direita" )
 {
     recursivo ("frente", quantidade);
 }else{
     recursivo ("direita", quantidade);
 }
 }
int main (){

    int  i = 1 ;
    int I = 1;
    int j = 1;
    char direita, frente, esquerda;
   
    printf ("Bispo\n");
    recursivo ("frente", 5);
    
    
    
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