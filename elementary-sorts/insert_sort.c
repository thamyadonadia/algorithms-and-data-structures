#include "item.h"

void sort(Item *a, int lo, int hi){
  
    for(int i = lo+1; i<hi+1; i++){
        int j = i-1, k = i;
        
        while(less(a[k], a[j]) && j>=0){
            exch(a[k], a[j]);
            k = j;
            j--;
        }
    }
}