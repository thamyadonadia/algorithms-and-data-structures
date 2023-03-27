#include <stdio.h>
#include "quick-union.h"

int main(){
    int size = 0; 

    scanf("%d", &size);
    int id[size], sz[size];

    init(size, id, sz);
    findMultiples(size, id, sz);
    print(size, id);
    return 0;
}
