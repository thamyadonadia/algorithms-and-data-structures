#include <stdio.h>
#include "problem.h"

int main(){
    int n, m; 

    scanf("%d %d", &n, &m);
    Lista* lista = inicLista();
    init(n, lista); 
    int leader = find_leader(n, m, lista);
    liberaLista(lista);

    printf("\nthe leader is: %d\n", leader);

    return 0;
}