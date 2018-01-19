
int peek(stack *s,int *elt)
{
    if(!isEmpty(s))
    {
        *elt=s->top->data;
        //fprintf(stdout,"Peek Element: %d\n",*elt);
        return 1;
    }
    *elt=-1;
    return 0;
}
