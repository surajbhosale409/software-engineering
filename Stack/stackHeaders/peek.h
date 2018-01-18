
int peek(stack *s)
{
    if(!isEmpty(s))
    {
        fprintf(stdout,"Peek Element: %d\n",s->top->data);
        return 1;
    }
    return 0;
}
