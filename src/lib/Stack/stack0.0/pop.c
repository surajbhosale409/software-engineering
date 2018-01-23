#include"stack.h"

errcode pop(stack *s)
{
    if(s->top>=0) 
    {
        s->stackArray[s->top]=0;
        s->top--;
        return 1;
     }

    return 0;
}
