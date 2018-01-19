
int copy(stack *dest,stack *source)
{
    stack *copier;

    int elt;

    if( !dest || !source)
        return 0;
    
    if(!initStack(&copier,source->capacity))
        return 0;
    
    //fprintf(stdout,"Copying stacks\n");

    while(!isEmpty(source))
    {
        peek(source,&elt);
        push(copier,elt);
        pop(source);
    }
    
    while(!isEmpty(copier))
    {
        peek(copier,&elt);
        push(source,elt);
        push(dest,elt);
        pop(copier);
    }

    //fprintf(stdout,"Copying complete\n");
    
    return 1;
}
