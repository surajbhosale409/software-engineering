#include"stack.h"

errcode constructStack(stack **s)
{
     *s=(stack *) malloc (sizeof(stack));
     
     if(*s)
     {
        (*s)->top=NULL;
        (*s)->count=-1;
        return 1;
     }
     return 0;
}


errcode destructStack(stack **s)
{
   if(s && *s)
   {  
    destructList((*s)->top);
    free(*s);
    return 1;
   }
   return 0;
}
