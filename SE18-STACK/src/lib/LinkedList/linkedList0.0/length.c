#include"linkedList.h"

int length(node *list)
{
    if(list)
        return 1+length(list->next);
    else
        return 0;
}
