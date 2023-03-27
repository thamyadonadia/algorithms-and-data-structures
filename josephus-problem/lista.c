#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct celula Celula;

struct celula{
    Celula* prox;
    int num;
};

struct lista{
    Celula* prim;
    Celula* ult;
};

// inicializa a lista vazia 
Lista* inicLista(){
    Lista* lista = (Lista*) malloc(sizeof(lista));  
    lista->prim = NULL;
    lista->ult = NULL;
    return lista;
}

// insere aluno na última posição da lista 
Lista* insere(Lista* lista, int index){
    Celula* nova = (Celula*) malloc(sizeof(Celula));

    nova->num = index;
    nova->prox = NULL;
    
    if(lista->prim == NULL) lista->prim = nova;
    else lista->ult->prox = nova; 
    
    lista->ult = nova;

    return lista;
}

int retira(Lista* lista, int index){
    Celula* p = lista->prim;
    Celula* ant = NULL;

    //for(int i=0; i<index-1; i++){
      //  p = p->prox;

    //}
            //  o primeiro da lista 
            if(p == lista->prim){
                lista->prim = p->prox;
                free(p);
                return 1;
            
            // o último da lista 
            }else if(p->prox == NULL && ant!=NULL){
                lista->ult = ant;
                ant->prox = NULL;
                free(p);
                return 1;

            //  no meio da lista
            }else{
                ant->prox = p->prox;
                free(p);
                return 1;
            }
    

        ant = p;
        p = p->prox;

    

    return 0;
}


// liberação da memória alocada para a lista 
void liberaLista(Lista* lista){
    Celula* p = lista->prim;
    Celula* temp = NULL;

    while(p!=NULL){
        temp = p->prox;
        free(p);
        p = temp;
    }

    free(lista);
}

int getElemento(Lista* lista){
    return lista->prim->num;
}


