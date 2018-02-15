#include"stack.h"


errcode peek(stack *s,int *elt)
{
    if(s->top >= 0)
    {
        *elt=s->stackArray[s->top];
        return 1;
    }
    return 0;
}
