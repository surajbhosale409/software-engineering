#include"linkedList.h"

errcode areEqualLList(node *list1, node *list2)
{
    if(!list1 && !list2)
        return 1;
    else if(!list1 || !list2)
        return 0;
    else if(list1->data != list2->data)
        return 0;
    else 
        return areEqualLList(list1->next,list2->next);
}

