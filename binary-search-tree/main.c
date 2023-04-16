#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "binary-search-tree.h"

int main(int argc, char const *argv[]){
    int n = atoi(argv[1]);
    Tree* t = createEmpty();
    
    srand(time(NULL));

    for(int i=0; i<n; i++){
        int r = rand();
        t = insertKey(t, r);
    }
    
    destruct(t);
    return 0;
}
