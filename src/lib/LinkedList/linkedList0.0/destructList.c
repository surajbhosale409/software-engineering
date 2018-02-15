#include"linkedList.h"

void destructList(node *list)
{
    if(list)
    {
        destructList(list->next);
        free(list);
    }
}
