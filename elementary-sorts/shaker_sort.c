#include "item.h"

void sort(Item *a, int lo, int hi){
    int changed = 1; 

    while(changed == 1){
        changed = 0;

        for(int i=hi, j=lo; i>lo, j<hi; i--, j++){
            if(less(a[j+1], a[j])){
                exch(a[j+1], a[j]);
                changed = 1;
            }

            if(less(a[i], a[i-1])){
                exch(a[i], a[i-1]);
                changed = 1; 
            }
        } 
    }
}