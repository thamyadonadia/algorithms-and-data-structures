#include "item.h"

// melhorar (tornar mais eficiente) e usar as funções de item.h
void sort(Item *a, int lo, int hi){
    int aux = 0, index = 0, min = a[0]; 

    for(int i=lo; i<=hi; i++){
        for(int j=i+1; j<=hi; j++){
            if(a[j]<min){
                min = a[j];
                index = j;
            }
        }

        if(min<a[i]){
            aux = a[i];
            a[i] = min;
            a[index] = aux;
        }    

       min = a[i+1];
    }
}
