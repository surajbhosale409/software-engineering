#include"stack.h"

errcode areEqual(stack *s1, stack *s2)
{
    if(s1->top != s2->top)
        return 0;
    
    for(int i=0;i<=s1->top;i++)
        if(s1->stackArray[i] != s2->stackArray[i])
            return 0;
   
    return 1;
}

