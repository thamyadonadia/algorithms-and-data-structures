#include <stdlib.h>
#include <stdio.h>
#include "binary-search-tree.h"

struct tree{
    Tree* left;
    Tree* right;
    int key;
};

Tree* createEmpty(){
    return NULL;
}

Tree* insertKey(Tree* t, int key){
    if(t == NULL){
        Tree* new = malloc(sizeof(Tree));
        new->right = NULL;
        new->left = NULL;
        new->key = key;
        return new;
    
    }else{
        if(key < t->key) t->left = insertKey(t->left, key);
        else if(key > t->key) t->right = insertKey(t->right, key);
    }

    return t;
}

// recursive binary search tree traversal

void preOrder(Tree* t, void(*visit) (Tree*)){
    if(t == NULL) return;

    visit(t);
    preOrder(t->left, visit);
    preOrder(t->right, visit);
    
}

void inOrder(Tree* t, void(*visit) (Tree*)){
    if(t == NULL) return;

    inOrder(t->left, visit);
    visit(t);
    inOrder(t->right, visit);
}

void postOrder(Tree* t, void(*visit) (Tree*)){
    if(t == NULL) return;
    
    postOrder(t->left, visit);
    postOrder(t->right, visit);
    visit(t);
}

int height(Tree* t){ 
    if(t == NULL) return 0;
    else if(t->left == NULL && t->right == NULL) return 1;
    else return height(t->left) + height(t->right) + 1; 
}

void destruct(Tree* t){
    if(t != NULL){
        destruct(t->left);
        destruct(t->right);
        free(t);
    }
}




