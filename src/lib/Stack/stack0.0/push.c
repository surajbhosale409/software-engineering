#include"stack.h"

errcode push(stack *s,int data)
{
    if( s->top < MAX_SIZE-1 )
    {
       s->stackArray[s->top+1]=data;
       s->top++;
       return 1;
    }
    return 0;
}
