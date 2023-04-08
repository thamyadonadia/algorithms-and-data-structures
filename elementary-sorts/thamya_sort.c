#include "item.h"

void sort(Item *a, int lo, int hi){
    for(int i=0; i<hi+1; i++){
        for(int j=i+1; j<hi+1; j++){
            if(a[j]<a[i]){
                exch(a[j], a[i]);
            }
        }
    }
}