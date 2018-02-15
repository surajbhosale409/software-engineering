#define MAX_SIZE 1000

#include"linkedListStruct.h"
#include<stdio.h>
#include<stdlib.h>

typedef int errcode;

node * newNode(int );
node * insertFront(node *, int);
node * insertEnd(node *, int);
node * deleteFront(node *);
int length(node *);
errcode areEqualLList(node *, node *);
node * copyLList(node *, node *i);
void destructList(node *);
