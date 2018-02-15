#include"linkedList.h"

node * deleteFront(node *list)
{
    if(list)
    {
     node *newHead=list->next;
     free(list);
     return newHead;
    }
    return list;
}
