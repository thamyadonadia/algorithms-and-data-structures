#include "problem.h"
#include <stdio.h>

void init(int n, Lista* l){
   for(int i =0; i<n; i++){
        insere(l, i+1);
   }
}

int find_leader(int n, int m, Lista* l){
    int ult = 0;

    for(int i=1; i<n; i++){
        if(i==1) ult = retira(l, m, 0);
        else ult = retira(l, m, ult);
    }

    return getElemento(l);
}
    