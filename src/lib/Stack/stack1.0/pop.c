#include"stack.h"

errcode pop(stack *s)
{
    if(s->count>=0) 
    {
        s->top=deleteFront(s->top);
        s->count--;
        return 1;
     }

    return 0;
}
