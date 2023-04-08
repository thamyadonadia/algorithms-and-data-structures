#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main(int argc, char const *argv[]){
    int n = atoi(argv[1]);

    Item* array = malloc(sizeof(int)*n);

    for(int i=0; i<n; i++){
        scanf("%d*[\n]", &array[i]);
    }

    clock_t start, stop;
    start = clock();
    sort(array, 0, n-1);
    stop = clock();
    double time_taken = ((double) stop - start) / CLOCKS_PER_SEC;

    for(int j=0; j<n; j++){
        printf("%d\n", array[j]);
    }

    printf("Elapsed time: %.3f\n", time_taken);
    free(array);

    return 0;
}

// compile: gcc -o main main.c <sort-filename>.c 