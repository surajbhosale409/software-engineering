#include"stack.h"

errcode constructStack(stack **s,int maxSize)
{
    *s= (stack *) malloc (sizeof(stack));
    
    if(*s)
    {
        (*s)->currentSize=0;
        (*s)->capacity=maxSize;
        (*s)->top=NULL;
        return 1;
    }
    
    return 0;
}


errcode destructStack(stack *s)
{
   if(s)
   {  
    while(!isEmpty(s))
        pop(s);
    free(s);
    return 1;
   }
   return 0;
}
