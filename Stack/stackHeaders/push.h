
int push(stack *s,int data)
{
    if(s && !isFull(s))
    {
        stackLinkedList *node= (stackLinkedList *) malloc (sizeof(stackLinkedList));
        if(node)
        {
            node->data=data;
            node->next=s->top;
            s->top=node;
            s->currentSize++;
            s->typeOfData=0;
            return 1;
        }
        return 0;
    }
    
    return 0;
}
