#include"stack.h"

errcode push(stack *s,int data)
{
    if( s->count < MAX_SIZE-1 )
    {
       s->top=insertFront(s->top,data);
       s->count++;
       return 1;
    }
    return 0;
}
