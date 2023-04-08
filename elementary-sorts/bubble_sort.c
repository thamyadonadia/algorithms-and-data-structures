#include "item.h"

void sort(Item *a, int lo, int hi){
    int changed = 1; 

    while(changed == 1){
        changed = 0;

        for(int j=lo; j<hi; j++){
            if(less(a[j+1], a[j])){
                exch(a[j+1], a[j]);
                changed = 1;
            }
        } 
    }
}