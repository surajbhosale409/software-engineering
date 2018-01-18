
stack * initStack(int maxSize)
{
    stack *s= (stack *) malloc (sizeof(stack));
    
    if(s)
    {
        s->currentSize=0;
        s->capacity=maxSize;
        s->top=NULL;
    }
    
    return s;
}
