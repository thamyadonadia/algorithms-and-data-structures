#include "array.h"
#include <stdio.h>

void init(int n, Lista* l){
   for(int i =0; i<n; i++){
        insere(l, i+1);
   }
}

//void eliminate(int n, int m, int circle[]);

//int find_leader(int n, int c);

// eu preciso pular os elementos já marcados
int find_leader(int n, int m, Lista* l){
    int sum = 0;

    for(int i=0; i<m; i++){
        sum+=m;

        if(sum>n) sum-=n;
        retira(l, sum);
        n--;
        
    }

    return 1;
}
    