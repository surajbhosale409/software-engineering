
int isFull(stack *s)
{
    if (s && s->capacity==s->currentSize)
        return 1;
    return 0;
}
