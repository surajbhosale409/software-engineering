#include"stack.h"

errcode areEqual(stack *s1, stack *s2)
{
    if(s1->count != s2->count)
        return 0;
    return areEqualLList(s1->top,s2->top);
}

