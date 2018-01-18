
int isFull(stack *s)
{
    if (s->capacity==s->currentSize)
        return 1;
    return 0;
}
