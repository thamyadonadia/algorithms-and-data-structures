#ifndef QUICKUNION_H
#define QUICKUNION_H

#include <stdbool.h>

void init(int size, int id[], int sz[]);

void findMultiples(int size, int id[], int sz[]);

void quickUnion(int id[], int sz[], int n1, int n2);

int find(int n, int id[]);

bool primeNumber(int n, int id[]);

void print(int size, int id[]);

#endif 