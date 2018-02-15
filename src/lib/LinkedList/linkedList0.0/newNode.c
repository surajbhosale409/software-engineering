#include"linkedList.h"

node * newNode(int data)
{
    node *list = (node *) malloc (sizeof(node));
    list->data=data;
    list->next=NULL;
    return list;
}
