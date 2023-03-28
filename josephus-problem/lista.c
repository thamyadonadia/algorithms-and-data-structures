#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

typedef struct celula Celula;

struct celula{
    Celula* prox;
    Celula* ant;
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

// insere na última posição da lista 
Lista* insere(Lista* lista, int num){
    Celula* nova = (Celula*) malloc(sizeof(Celula));

    nova->num = num;
    nova->prox = NULL;

    // se for o primeiro elemento a ser adicionado 
    if(lista->prim == NULL){
        lista->prim = nova;
        nova->ant = NULL;

    }else{
        lista->ult->prox = nova;
        nova->ant = lista->ult;
    }

    lista->ult = nova;
    return lista;
}

int retira(Lista* lista, int m, int ult){
    Celula* p = lista->prim;
        
        for(int i=1; i<m+ult; i++){
            if (p->prox == NULL) p = lista->prim;
            else p = p->prox;
        }

        printf("elemento a ser retirado: %d\n", p->num);
        printf("%d\n", m+ult);

            //  o primeiro da lista 
            if(p == lista->prim && p->ant == NULL){
                lista->prim = p->prox;
                p->prox->ant = NULL;
                free(p);
                return m+ult;
            
            // o último da lista 
            }else if(p->prox == NULL){
                lista->ult = p->ant;
                p->ant->prox = NULL;
                free(p);
                return m+ult;

            // se o aluno estiver no meio da lista
            }else{
                p->ant->prox = p->prox;
                p->prox->ant = p->ant;
                free(p);
                return m+ult;
            }
        

    return -1;
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
