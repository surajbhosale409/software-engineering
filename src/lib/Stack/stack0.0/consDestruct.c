#include"stack.h"

errcode constructStack(stack **s)
{
     *s=(stack *) malloc (sizeof(stack));
     
     if(*s)
     {
        (*s)->stackArray=(int *) malloc(sizeof(int)*MAX_SIZE);
        (*s)->top=-1;
        return 1;
     }
     return 0;
}


errcode destructStack(stack **s)
{
   if(s && *s)
   {  
    free((*s)->stackArray);
    free(*s);
    return 1;
   }
   return 0;
}
