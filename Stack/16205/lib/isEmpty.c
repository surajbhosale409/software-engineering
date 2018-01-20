#include"stack.h"

errcode isEmpty(stack *s)
{
    if(s && s->currentSize==0)
        return 1;
    return 0;
}
