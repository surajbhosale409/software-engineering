#include"stack.h"

errcode pop(stack *s)
{
    stackLinkedList *toPop;
    if(!isEmpty(s))
    {
        toPop=s->top;
        s->top=toPop->next;
        
        //fprintf(stdout,"Popped %d\n",toPop->data);
        
        free(toPop);
        s->currentSize--;
        return 1;
    }
    return 0;
}
