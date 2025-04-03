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
recursivo ("frente", 5);

















return 0;
}