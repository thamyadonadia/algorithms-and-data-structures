#ifndef QUICKUNION_C
#define QUICKUNION_C

#include <stdio.h>
#include "quick-union.h"

void init(int size, int id[], int sz[]){
    for(int i = 0 ; i < size; i++){
        id[i] = i;
        sz[i] = 1;
    }
}

void findMultiples(int size, int id[], int sz[]){
    int product = 0;

    for(int i = 2; i<size; i++){        
        for(int factor = 2;;factor++){
            product = factor*id[i];

            if(product<size) quickUnion(id, sz, product, id[i]);
            else break;
        }
    }
}

void quickUnion(int id[], int sz[], int n1, int n2){
    if(n1!=id[n1] || n2!=id[n2]) return;

    int i = find(n1, id);
    int j = find(n2, id);

    if(i == j) return;
    
    if(sz[i] <= sz[j]){
        id[i] = j; sz[j] += sz[i];

    }else{
        id[j] = i; sz[i] += sz[j];
    }
}

int find(int n, int id[]){
    while(n!=id[n]) n = id[n];
    return n;
}

bool primeNumber(int n, int id[]){
    return n == find(n, id); 
}

void print(int size, int id[]){
    for(int i = 2; i<size; i++){
        if(primeNumber(i, id)) printf("%d\n", i);
    }
}


#endif 