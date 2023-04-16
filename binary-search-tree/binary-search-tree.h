#ifndef BTREE_H
#define BTREE_H

typedef struct tree Tree;

Tree* createEmpty();

Tree* insertKey(Tree* t, int key);

void preOrder(Tree* t, void(*visit) (Tree*));

void inOrder(Tree* t, void(*visit) (Tree*));

void postOrder(Tree* t, void(*visit) (Tree*));

int height(Tree* t);

void destruct(Tree* t);

#endif 