#include <stdio.h>
#include <stdlib.h>
#include "arvoreb.h"

int main()
{
    Tipo_pag *arvore;
    reg teste;
    teste.chave = 10;
    Inicializa(&arvore);
   // Insere(teste,&arvore);
   // printf("%d",teste.chave);
    Insere(teste, &arvore);
    Pesquisa(teste,arvore);
    Insere(teste,&arvore);
    //printf("%d",arvore->registros->chave);
    Retira(10,&arvore);
    //Pesquisa(teste,arvore);
    //printf("%d",arvore->registros->chave);



    //arvore->registros[0].chave = 10;
    //arvore->registros [1].chave = 15;

    return 0;
}
