#include"linkedList.h"

node * insertEnd(node *list, int data)
{
    if(list)
    {
        list->next=insertEnd(list->next,data);
        return list;
    }
    return newNode(data);
}
