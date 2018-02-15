#include"linkedList.h"

node *insertFront(node *list,int data)
{
    node *newHead=newNode(data);
    newHead->next=list;
    return newHead;
}
