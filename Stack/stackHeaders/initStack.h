
int initStack(stack **s,int maxSize)
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
