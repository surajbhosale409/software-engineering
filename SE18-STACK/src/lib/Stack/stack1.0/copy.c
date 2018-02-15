#include"stack.h"

errcode copy(stack **dest,stack *source)
{
 
    if(constructStack(dest))
    {
      (*dest)->top=copyLList((*dest)->top,source->top);
      (*dest)->count=source->count;
      return 1;
    }
    return 0;
}
