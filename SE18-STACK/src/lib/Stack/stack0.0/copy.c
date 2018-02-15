#include"stack.h"

errcode copy(stack **dest,stack *source)
{
 
    if(constructStack(dest))
    {
      for(int i=0;i<=source->top;i++)
         push(*dest,source->stackArray[i]);
      return 1;
    }
    return 0;
}
