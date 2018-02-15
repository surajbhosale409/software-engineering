#include"stack.h"


errcode peek(stack *s,int *elt)
{
    if(s->top >= 0)
    {
        *elt=s->top->data;
        return 1;
    }
    return 0;
}
